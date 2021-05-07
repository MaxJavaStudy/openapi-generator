package org.openapitools.codegen.languages;

import io.swagger.v3.oas.models.Operation;
import io.swagger.v3.oas.models.media.ArraySchema;
import io.swagger.v3.oas.models.media.Schema;
import io.swagger.v3.oas.models.responses.ApiResponse;
import io.swagger.v3.oas.models.servers.Server;
import org.apache.commons.lang3.StringUtils;
import org.openapitools.codegen.*;
import org.openapitools.codegen.meta.features.*;
import org.openapitools.codegen.utils.ModelUtils;
import org.slf4j.Logger;
import org.slf4j.LoggerFactory;

import java.io.File;
import java.util.*;

import static org.openapitools.codegen.utils.OnceLogger.once;
import static org.openapitools.codegen.utils.StringUtils.underscore;

public class CppNghttp2ServerServerCodegen extends AbstractCppCodegen {
    public static final String PROJECT_NAME = "nghttp2Server";
    protected String implFolder = "impl";

    private static final String uuidType = "uuid::Uuid";
    private static final String bytesType = "swagger::ByteArray";

    private static final String xmlMimeType = "application/xml";
    private static final String textXmlMimeType = "text/xml";
    private static final String octetMimeType = "application/octet-stream";
    private static final String plainTextMimeType = "text/plain";
    private static final String jsonMimeType = "application/json";

    // RFC 7386 support
    private static final String mergePatchJsonMimeType = "application/merge-patch+json";

    // RFC 7807 Support
    private static final String problemJsonMimeType = "application/problem+json";
    private static final String problemXmlMimeType = "application/problem+xml";

    static final Logger LOGGER = LoggerFactory.getLogger(CppNghttp2ServerServerCodegen.class);

    public CodegenType getTag() {
        return CodegenType.SERVER;
    }

    public String getName() {
        return "cppnghttp2server";
    }

    public String getHelp() {
        return "Generates a cppnghttp2server server.";
    }

    public CppNghttp2ServerServerCodegen() {
        super();

        modifyFeatureSet(features -> features.includeDocumentationFeatures(DocumentationFeature.Readme)
                .securityFeatures(EnumSet.noneOf(SecurityFeature.class))
                .excludeGlobalFeatures(GlobalFeature.XMLStructureDefinitions, GlobalFeature.Callbacks,
                        GlobalFeature.LinkObjects, GlobalFeature.ParameterStyling, GlobalFeature.MultiServer)
                .excludeSchemaSupportFeatures(SchemaSupportFeature.Polymorphism)
                .excludeParameterFeatures(ParameterFeature.Cookie));

        apiTemplateFiles.put("api-header.mustache", ".h");
        apiTemplateFiles.put("api-source.mustache", ".cpp");
        apiTemplateFiles.put("api-impl-header.mustache", ".h");
        // apiTemplateFiles.put("api-impl-source.mustache", ".cpp");

        embeddedTemplateDir = templateDir = "cppnghttp2server-server";

        cliOptions.clear();

        supportingFiles
                .add(new SupportingFile("main-api-server.mustache", "", modelNamePrefix + "main-api-server.cpp"));
        supportingFiles.add(new SupportingFile("cmake.mustache", "", "CMakeLists.txt"));
        supportingFiles.add(new SupportingFile("README.mustache", "", "README.md"));
        supportingFiles.add(new SupportingFile("jsonParser.mustache", "", "jsonParser.hpp"));

        LOGGER.info("Using get/set-based model template");
        modelTemplateFiles.put("model-header.mustache", ".h");
        // modelTemplateFiles.put("model-source.mustache", ".cpp");

        languageSpecificPrimitives = new HashSet<String>(
                Arrays.asList("int", "char", "bool", "long", "float", "double", "int32_t", "int64_t"));

        typeMapping = new HashMap<String, String>();
        typeMapping.put("date", "std::string");
        typeMapping.put("DateTime", "std::string");
        typeMapping.put("string", "std::string");
        typeMapping.put("integer", "int32_t");
        typeMapping.put("long", "int64_t");
        typeMapping.put("boolean", "bool");
        typeMapping.put("array", "std::vector");
        typeMapping.put("map", "std::map");
        typeMapping.put("file", "std::string");
        typeMapping.put("object", "Object");
        typeMapping.put("binary", "std::string");
        typeMapping.put("number", "double");
        typeMapping.put("UUID", "std::string");
        typeMapping.put("URI", "std::string");
        typeMapping.put("ByteArray", "std::string");

        super.importMapping = new HashMap<String, String>();
        importMapping.put("std::vector", "#include <vector>");
        importMapping.put("std::map", "#include <map>");
        importMapping.put("std::string", "#include <string>");
        importMapping.put("std::optional", "#include <optional>");
        // importMapping.put("Object", "#include \"Object.h\"");

        // namespace

        apiPackage = "org.openapitools.server.api";
        modelPackage = "org.openapitools.server.model";

        additionalProperties.put("modelNamespaceDeclarations", modelPackage.split("\\."));
        additionalProperties.put("modelNamespace", modelPackage.replaceAll("\\.", "::"));
        additionalProperties.put("apiNamespaceDeclarations", apiPackage.split("\\."));
        additionalProperties.put("apiNamespace", apiPackage.replaceAll("\\.", "::"));

        // reserved word
        setReservedWordsLowerCase(Arrays.asList(
                // local variable names used in API methods (endpoints)
                "varLocalPath", "queryParameters", "headerParams", "formParams", "useFormData", "varLocalDeferred",
                "requestOptions",
                // Typescript reserved words
                "abstract", "arguments", "boolean", "break", "byte", "case", "catch", "char", "class", "const",
                "continue", "debugger", "default", "delete", "do", "double", "else", "enum", "eval", "export",
                "extends", "false", "final", "finally", "float", "for", "function", "goto", "if", "implements",
                "import", "in", "instanceof", "int", "interface", "let", "long", "native", "new", "null", "package",
                "private", "protected", "public", "return", "short", "static", "super", "switch", "synchronized",
                "this", "throw", "throws", "transient", "true", "try", "typeof", "var", "void", "volatile", "while",
                "with", "yield", "Array", "Date", "eval", "function", "hasOwnProperty", "Infinity", "isFinite", "isNaN",
                "isPrototypeOf", "Math", "NaN", "Number", "Object", "prototype", "String", "toString", "undefined",
                "valueOf"));
    }

    @Override
    public String toModelImport(String name) {
        if (importMapping.containsKey(name)) {
            return importMapping.get(name);
        } else {
            return "#include \"" + name + ".h\"";
        }
    }

    @Override
    public CodegenModel fromModel(String name, Schema model) {
        CodegenModel codegenModel = super.fromModel(name, model);

        Set<String> oldImports = codegenModel.imports;
        codegenModel.imports = new HashSet<>();
        for (String imp : oldImports) {
            String newImp = toModelImport(imp);
            if (!newImp.isEmpty()) {
                codegenModel.imports.add(newImp);
            }
        }

        // Import vector if an enum is present
        if (codegenModel.hasEnums) {
            codegenModel.imports.add("#include <vector>");
        }

        return codegenModel;
    }

    @SuppressWarnings("unchecked")
    @Override
    public Map<String, Object> postProcessOperationsWithModels(Map<String, Object> objs, List<Object> allModels) {
        Map<String, Object> operations = (Map<String, Object>) objs.get("operations");
        String classname = (String) operations.get("classname");
        operations.put("classnameSnakeUpperCase", underscore(classname).toUpperCase(Locale.ROOT));
        operations.put("classnameSnakeLowerCase", underscore(classname).toLowerCase(Locale.ROOT));
        List<CodegenOperation> operationList = (List<CodegenOperation>) operations.get("operation");
        for (CodegenOperation op : operationList) {

            for (CodegenParameter param : op.allParams) {

                // TODO: This changes the info about the real type but it is needed to parse the
                // header params
                if (param.isHeaderParam) {
                    param.dataType = "std::optional<std::string>";
                    param.baseType = "std::optional<std::string>";
                } else if (param.isQueryParam) {
                    if (param.isPrimitiveType) {
                        param.dataType = " std::optional<" + param.dataType + ">";
                    } else {
                        param.dataType = " std::optional<" + param.dataType + ">";
                        param.baseType = " std::optional<" + param.baseType + ">";
                    }
                }
            }

            // Check if any one of the operations needs a model, then at API file level, at
            // least one model has to be included.
            for (String hdr : op.imports) {
                if (importMapping.containsKey(hdr)) {
                    continue;
                }
                operations.put("hasModelImport", true);
            }
        }
        // process multi-part
 

        for (CodegenOperation op : operationList) {
            postProcessOperationWithModels(op, allModels);
        }

        return objs;
    }

    private void postProcessOperationWithModels(CodegenOperation op, List<Object> allModels) {
        boolean consumesPlainText = false;
        boolean consumesXml = false;

        if (op.consumes != null) {
            for (Map<String, String> consume : op.consumes) {
                if (consume.get("mediaType") != null) {
                    String mediaType = consume.get("mediaType");

                    if (isMimetypeXml(mediaType)) {
                        additionalProperties.put("usesXml", true);
                        consumesXml = true;
                    } else if (isMimetypePlain(mediaType)) {
                        consumesPlainText = true;
                    } else if (isMimetypeWwwFormUrlEncoded(mediaType)) {
                        additionalProperties.put("usesUrlEncodedForm", true);
                    } else if (isMimetypeMultipartFormData(mediaType)) {
                        op.vendorExtensions.put("x-consumes-multipart", true);
                        additionalProperties.put("apiUsesMultipartFormData", true);
                        additionalProperties.put("apiUsesMultipart", true);
                    } else if (isMimetypeMultipartRelated(mediaType)) {
                        op.vendorExtensions.put("x-consumes-multipart-related", true);
                        additionalProperties.put("apiUsesMultipartRelated", true);
                        additionalProperties.put("apiUsesMultipart", true);
                    }
                }
            }
        }
    }

    private boolean isMimetypeXml(String mimetype) {
        return mimetype.toLowerCase(Locale.ROOT).startsWith(xmlMimeType)
                || mimetype.toLowerCase(Locale.ROOT).startsWith(problemXmlMimeType)
                || mimetype.toLowerCase(Locale.ROOT).startsWith(textXmlMimeType);
    }

    private boolean isMimetypeJson(String mimetype) {
        return mimetype.toLowerCase(Locale.ROOT).startsWith(jsonMimeType)
                || mimetype.toLowerCase(Locale.ROOT).startsWith(mergePatchJsonMimeType)
                || mimetype.toLowerCase(Locale.ROOT).startsWith(problemJsonMimeType);
    }

    private boolean isMimetypeWwwFormUrlEncoded(String mimetype) {
        return mimetype.toLowerCase(Locale.ROOT).startsWith("application/x-www-form-urlencoded");
    }

    private boolean isMimetypeMultipartFormData(String mimetype) {
        return mimetype.toLowerCase(Locale.ROOT).startsWith("multipart/form-data");
    }

    private boolean isMimetypeOctetStream(String mimetype) {
        return mimetype.toLowerCase(Locale.ROOT).startsWith(octetMimeType);
    }

    private boolean isMimetypeMultipartRelated(String mimetype) {
        return mimetype.toLowerCase(Locale.ROOT).startsWith("multipart/related");
    }

    private boolean isMimetypeUnknown(String mimetype) {
        return mimetype.equals("*/*");
    }

    /**
     * Do we have any special handling for this mimetype?
     */
    boolean isMimetypePlain(String mimetype) {
        boolean result = !(isMimetypeUnknown(mimetype) || isMimetypeXml(mimetype) || isMimetypeJson(mimetype)
                || isMimetypeWwwFormUrlEncoded(mimetype) || isMimetypeMultipartFormData(mimetype)
                || isMimetypeMultipartRelated(mimetype));
        return result;
    }

    @Override
    public String toModelFilename(String name) {
        return toModelName(name);
    }

    @Override
    public String apiFilename(String templateName, String tag) {
        String result = super.apiFilename(templateName, tag);

        if (templateName.endsWith("impl-header.mustache")) {
            int ix = result.lastIndexOf(File.separatorChar);
            result = result.substring(0, ix) + result.substring(ix, result.length() - 2) + "Impl.h";
            result = result.replace(apiFileFolder(), implFileFolder());
        } else if (templateName.endsWith("impl-source.mustache")) {
            int ix = result.lastIndexOf(File.separatorChar);
            result = result.substring(0, ix) + result.substring(ix, result.length() - 4) + "Impl.cpp";
            result = result.replace(apiFileFolder(), implFileFolder());
        }
        return result;
    }

    /**
     * Location to write model files. You can use the modelPackage() as defined when
     * the class is instantiated
     */
    public String modelFileFolder() {
        return (outputFolder + "/model").replace("/", File.separator);
    }

    /**
     * Location to write api files. You can use the apiPackage() as defined when the
     * class is instantiated
     */
    @Override
    public String apiFileFolder() {
        return (outputFolder + "/api").replace("/", File.separator);
    }

    private String implFileFolder() {
        return (outputFolder + "/" + implFolder).replace("/", File.separator);
    }

    @Override
    public String toApiFilename(String name) {
        return toApiName(name);
    }

    /**
     * Optional - type declaration. This is a String which is used by the templates
     * to instantiate your types. There is typically special handling for different
     * property types
     *
     * @return a string value used as the `dataType` field for model templates,
     *         `returnType` for api templates
     */
    @Override
    public String getTypeDeclaration(Schema p) {
        String openAPIType = getSchemaType(p);

        if (ModelUtils.isArraySchema(p)) {
            ArraySchema ap = (ArraySchema) p;
            Schema inner = ap.getItems();
            return getSchemaType(p) + "<" + getTypeDeclaration(inner) + ">";
        }
        if (ModelUtils.isMapSchema(p)) {
            Schema inner = getAdditionalProperties(p);
            return getSchemaType(p) + "<std::string, " + getTypeDeclaration(inner) + ">";
        } else if (ModelUtils.isByteArraySchema(p)) {
            return "std::string";
        }
        if (ModelUtils.isStringSchema(p) || ModelUtils.isDateSchema(p) || ModelUtils.isDateTimeSchema(p)
                || ModelUtils.isFileSchema(p) || languageSpecificPrimitives.contains(openAPIType)) {
            return toModelName(openAPIType);
        }

        return openAPIType;
    }

    @Override
    public String toDefaultValue(Schema p) {
        if (ModelUtils.isBooleanSchema(p)) {
            return "false";
        } else if (ModelUtils.isDateSchema(p)) {
            return "\"\"";
        } else if (ModelUtils.isDateTimeSchema(p)) {
            return "\"\"";
        } else if (ModelUtils.isNumberSchema(p)) {
            if (ModelUtils.isFloatSchema(p)) {
                return "0.0f";
            }
            return "0.0";
        } else if (ModelUtils.isIntegerSchema(p)) {
            if (ModelUtils.isLongSchema(p)) {
                return "0L";
            }
            return "0";
        } else if (ModelUtils.isByteArraySchema(p)) {
            return "\"\"";
        } else if (ModelUtils.isMapSchema(p)) {
            String inner = getSchemaType(getAdditionalProperties(p));
            return "std::map<std::string, " + inner + ">()";
        } else if (ModelUtils.isArraySchema(p)) {
            ArraySchema ap = (ArraySchema) p;
            String inner = getSchemaType(ap.getItems());
            return "std::vector<" + inner + ">()";
        } else if (!StringUtils.isEmpty(p.get$ref())) { // model
            return toModelName(ModelUtils.getSimpleRef(p.get$ref())) + "()";
        } else if (ModelUtils.isStringSchema(p)) {
            return "\"\"";
        }

        return "";
    }

    /**
     * Optional - OpenAPI type conversion. This is used to map OpenAPI types in a
     * `Schema` into either language specific types via `typeMapping` or into
     * complex models if there is not a mapping.
     *
     * @return a string value of the type or complex model for this property
     */
    @Override
    public String getSchemaType(Schema p) {
        String openAPIType = super.getSchemaType(p);
        String type = null;
        if (typeMapping.containsKey(openAPIType)) {
            type = typeMapping.get(openAPIType);
            if (languageSpecificPrimitives.contains(type))
                return toModelName(type);
        } else
            type = openAPIType;
        return toModelName(type);
    }

    @Override
    public String getTypeDeclaration(String str) {
        return toModelName(str);
    }

    @Override
    public CodegenOperation fromOperation(String path, String httpMethod, Operation operation, List<Server> servers) {
        CodegenOperation op = super.fromOperation(path, httpMethod, operation, servers);
        if (op.vendorExtensions == null) {
            op.vendorExtensions = new HashMap<>();
        }
        String pathForNghttp2 = path.replaceAll("\\{(.*?)}", ":$1");
        op.vendorExtensions.put("x-codegen-nghttp2-path", pathForNghttp2);

        return op;
    }

}
