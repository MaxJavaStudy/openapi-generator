/**
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. � 2020, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "jsonParser.hpp"
#include <nghttp2/asio_http2_server.h>
#include <nghttp2/http_router.hpp>
#include <signal.h>
#include <unistd.h>
#include <vector>

#include "AccessAndMobilitySubscriptionDataRetrievalApi.h"
#include "EnhancedCoverageRestrictionDataRetrievalApi.h"
#include "GPSIToSUPITranslationApi.h"
#include "GroupIdentifiersApi.h"
#include "LCSBroadcastAssistanceDataTypesRetrievalApi.h"
#include "LCSMobileOriginatedDataRetrievalApi.h"
#include "LCSPrivacyDataRetrievalApi.h"
#include "ProvidingAcknowledgementOfCAGUpdateApi.h"
#include "ProvidingAcknowledgementOfSNSSAIsUpdateApi.h"
#include "ProvidingAcknowledgementOfSteeringOfRoamingApi.h"
#include "ProvidingAcknowledgementOfUEParametersUpdateApi.h"
#include "RetrievalOfMultipleDataSetsApi.h"
#include "RetrievalOfSharedDataApi.h"
#include "SMFSelectionSubscriptionDataRetrievalApi.h"
#include "SMSManagementSubscriptionDataRetrievalApi.h"
#include "SMSSubscriptionDataRetrievalApi.h"
#include "SessionManagementSubscriptionDataRetrievalApi.h"
#include "SliceSelectionSubscriptionDataRetrievalApi.h"
#include "SubscriptionCreationApi.h"
#include "SubscriptionCreationForSharedDataApi.h"
#include "SubscriptionDeletionApi.h"
#include "SubscriptionDeletionForSharedDataApi.h"
#include "SubscriptionModificationApi.h"
#include "TraceConfigurationDataRetrievalApi.h"
#include "TriggerSORInfoUpdateApi.h"
#include "UEContextInAMFDataRetrievalApi.h"
#include "UEContextInSMFDataRetrievalApi.h"
#include "UEContextInSMSFDataRetrievalApi.h"
#include "V2XSubscriptionDataRetrievalApi.h"

#include "AccessAndMobilitySubscriptionData.h"

#include "AccessTech.h"

#include "AccessTech_anyOf.h"

#include "AcknowledgeInfo.h"

#include "AdditionalSnssaiData.h"

#include "AfExternal.h"

#include "Ambr.h"

#include "AmbrRm.h"

#include "AppDescriptor.h"

#include "AppPortId.h"

#include "Area.h"

#include "Arp.h"

#include "BatteryIndication.h"

#include "CagData.h"

#include "CagInfo.h"

#include "ChangeItem.h"

#include "ChangeType.h"

#include "CivicAddress.h"

#include "CodeWordInd.h"

#include "ContextInfo.h"

#include "CoreNetworkType.h"

#include "DataSetName.h"

#include "DefaultUnrelatedClass.h"

#include "DnnConfiguration.h"

#include "DnnInfo.h"

#include "EcRestrictionDataWb.h"

#include "Ecgi.h"

#include "EdrxParameters.h"

#include "EllipsoidArc.h"

#include "EllipsoidArc_allOf.h"

#include "EmergencyInfo.h"

#include "EnhancedCoverageRestrictionData.h"

#include "EpsInterworkingInfo.h"

#include "EpsIwkPgw.h"

#include "ExpectedUeBehaviourData.h"

#include "ExternalUnrelatedClass.h"

#include "FrameRouteInfo.h"

#include "GADShape.h"

#include "GNbId.h"

#include "GeographicArea.h"

#include "GeographicalCoordinates.h"

#include "GlobalRanNodeId.h"

#include "GroupIdentifiers.h"

#include "IdTranslationResult.h"

#include "InvalidParam.h"

#include "IpAddress.h"

#include "LcsBroadcastAssistanceTypesData.h"

#include "LcsClientClass.h"

#include "LcsClientExternal.h"

#include "LcsClientGroupExternal.h"

#include "LcsMoData.h"

#include "LcsMoServiceClass.h"

#include "LcsPrivacyData.h"

#include "LocationArea.h"

#include "LocationPrivacyInd.h"

#include "Lpi.h"

#include "LteV2xAuth.h"

#include "MdtUserConsent.h"

#include "ModificationNotification.h"

#include "Ncgi.h"

#include "NetworkAreaInfo.h"

#include "NiddInformation.h"

#include "NokiaDnnInfoAttributes.h"

#include "NotifyItem.h"

#include "NrV2xAuth.h"

#include "Nssai.h"

#include "NullValue.h"

#include "OdbPacketServices.h"

#include "OperationMode.h"

#include "PatchResult.h"

#include "PduSession.h"

#include "PduSessionContinuityInd.h"

#include "PduSessionType.h"

#include "PduSessionTypes.h"

#include "PgwInfo.h"

#include "PlmnEcInfo.h"

#include "PlmnId.h"

#include "PlmnOperatorClass.h"

#include "Point.h"

#include "PointAltitude.h"

#include "PointAltitudeUncertainty.h"

#include "PointAltitudeUncertainty_allOf.h"

#include "PointAltitude_allOf.h"

#include "PointUncertaintyCircle.h"

#include "PointUncertaintyCircle_allOf.h"

#include "PointUncertaintyEllipse.h"

#include "PointUncertaintyEllipse_allOf.h"

#include "Point_allOf.h"

#include "Polygon.h"

#include "Polygon_allOf.h"

#include "PreemptionCapability.h"

#include "PreemptionVulnerability.h"

#include "PrivacyCheckRelatedAction.h"

#include "ProblemDetails.h"

#include "PtwParameters.h"

#include "RatType.h"

#include "ReportItem.h"

#include "RestrictionType.h"

#include "ScheduledCommunicationTime.h"

#include "ScheduledCommunicationType.h"

#include "SdmSubsModification.h"

#include "SdmSubscription.h"

#include "ServiceAreaRestriction.h"

#include "ServiceTypeUnrelatedClass.h"

#include "SessionManagementSubscriptionData.h"

#include "SharedData.h"

#include "SmfSelectionSubscriptionData.h"

#include "SmsManagementSubscriptionData.h"

#include "SmsSubscriptionData.h"

#include "SmsfInfo.h"

#include "Snssai.h"

#include "SnssaiInfo.h"

#include "SorInfo.h"

#include "SorUpdateIndicator.h"

#include "SorUpdateInfo.h"

#include "SscMode.h"

#include "SscModes.h"

#include "StationaryIndication.h"

#include "SteeringContainer.h"

#include "SteeringInfo.h"

#include "SubscribedDefaultQos.h"

#include "SubscriptionDataSets.h"

#include "SuggestedPacketNumDl.h"

#include "SupportedGADShapes.h"

#include "SupportedGADShapes_anyOf.h"

#include "Tai.h"

#include "TraceData.h"

#include "TraceDataResponse.h"

#include "TraceDepth.h"

#include "TrafficProfile.h"

#include "UeAuth.h"

#include "UeContextInAmfData.h"

#include "UeContextInSmfData.h"

#include "UeContextInSmsfData.h"

#include "UeId.h"

#include "UncertaintyEllipse.h"

#include "UnrelatedClass.h"

#include "UpConfidentiality.h"

#include "UpIntegrity.h"

#include "UpSecurity.h"

#include "UpuData.h"

#include "UpuInfo.h"

#include "V2xSubscriptionData.h"

#include "ValidTimePeriod.h"

#include "VnGroupData.h"

#include "VzDnnConf.h"

#include <nghttp2/asio_http2_server.h>
static void sigHandler [[noreturn]] (int sig) {
  switch (sig) {
  case SIGINT:
  case SIGQUIT:
  case SIGTERM:
  case SIGHUP:
  default:
    // to do
    // what should we do when signal happens?
    break;
  }
  exit(0);
}

static void setUpUnixSignals(std::vector<int> quitSignals) {
  sigset_t blocking_mask;
  sigemptyset(&blocking_mask);
  for (auto sig : quitSignals)
    sigaddset(&blocking_mask, sig);

  struct sigaction sa;
  sa.sa_handler = sigHandler;
  sa.sa_mask = blocking_mask;
  sa.sa_flags = 0;

  for (auto sig : quitSignals)
    sigaction(sig, &sa, nullptr);
}

using namespace org::openapitools::server::api;

int main(int argc, char *argv[]) {

  std::vector<int> sigs{SIGQUIT, SIGINT, SIGTERM, SIGHUP};
  setUpUnixSignals(sigs);

  // server
  try {
    // Check command line arguments.
    if (argc < 4) {
      std::cerr
          << "Usage: asio-sv <address> <port> <threads> [<private-key-file> "
          << "<cert-file>]\n";
      return 1;
    }

    boost::system::error_code ec;

    std::string addr = argv[1];
    std::string port = argv[2];
    std::size_t num_threads = std::stoi(argv[3]);

    std::cout << "start server with addr :" << addr << ", port : " << port
              << ", thread mumber :" << num_threads << std::endl;

    http2 server;

    server.num_threads(num_threads);

    // load API schema
    static std::string apiSchemaBasePath = "";

    jsonParser::jsonParser<AccessAndMobilitySubscriptionData>::loadApiSchema(
        apiSchemaBasePath + "AccessAndMobilitySubscriptionData.json");

    jsonParser::jsonParser<AccessTech>::loadApiSchema(apiSchemaBasePath +
                                                      "AccessTech.json");

    jsonParser::jsonParser<AccessTech_anyOf>::loadApiSchema(
        apiSchemaBasePath + "AccessTech_anyOf.json");

    jsonParser::jsonParser<AcknowledgeInfo>::loadApiSchema(
        apiSchemaBasePath + "AcknowledgeInfo.json");

    jsonParser::jsonParser<AdditionalSnssaiData>::loadApiSchema(
        apiSchemaBasePath + "AdditionalSnssaiData.json");

    jsonParser::jsonParser<AfExternal>::loadApiSchema(apiSchemaBasePath +
                                                      "AfExternal.json");

    jsonParser::jsonParser<Ambr>::loadApiSchema(apiSchemaBasePath +
                                                "Ambr.json");

    jsonParser::jsonParser<AmbrRm>::loadApiSchema(apiSchemaBasePath +
                                                  "AmbrRm.json");

    jsonParser::jsonParser<AppDescriptor>::loadApiSchema(apiSchemaBasePath +
                                                         "AppDescriptor.json");

    jsonParser::jsonParser<AppPortId>::loadApiSchema(apiSchemaBasePath +
                                                     "AppPortId.json");

    jsonParser::jsonParser<Area>::loadApiSchema(apiSchemaBasePath +
                                                "Area.json");

    jsonParser::jsonParser<Arp>::loadApiSchema(apiSchemaBasePath + "Arp.json");

    jsonParser::jsonParser<BatteryIndication>::loadApiSchema(
        apiSchemaBasePath + "BatteryIndication.json");

    jsonParser::jsonParser<CagData>::loadApiSchema(apiSchemaBasePath +
                                                   "CagData.json");

    jsonParser::jsonParser<CagInfo>::loadApiSchema(apiSchemaBasePath +
                                                   "CagInfo.json");

    jsonParser::jsonParser<ChangeItem>::loadApiSchema(apiSchemaBasePath +
                                                      "ChangeItem.json");

    jsonParser::jsonParser<ChangeType>::loadApiSchema(apiSchemaBasePath +
                                                      "ChangeType.json");

    jsonParser::jsonParser<CivicAddress>::loadApiSchema(apiSchemaBasePath +
                                                        "CivicAddress.json");

    jsonParser::jsonParser<CodeWordInd>::loadApiSchema(apiSchemaBasePath +
                                                       "CodeWordInd.json");

    jsonParser::jsonParser<ContextInfo>::loadApiSchema(apiSchemaBasePath +
                                                       "ContextInfo.json");

    jsonParser::jsonParser<CoreNetworkType>::loadApiSchema(
        apiSchemaBasePath + "CoreNetworkType.json");

    jsonParser::jsonParser<DataSetName>::loadApiSchema(apiSchemaBasePath +
                                                       "DataSetName.json");

    jsonParser::jsonParser<DefaultUnrelatedClass>::loadApiSchema(
        apiSchemaBasePath + "DefaultUnrelatedClass.json");

    jsonParser::jsonParser<DnnConfiguration>::loadApiSchema(
        apiSchemaBasePath + "DnnConfiguration.json");

    jsonParser::jsonParser<DnnInfo>::loadApiSchema(apiSchemaBasePath +
                                                   "DnnInfo.json");

    jsonParser::jsonParser<EcRestrictionDataWb>::loadApiSchema(
        apiSchemaBasePath + "EcRestrictionDataWb.json");

    jsonParser::jsonParser<Ecgi>::loadApiSchema(apiSchemaBasePath +
                                                "Ecgi.json");

    jsonParser::jsonParser<EdrxParameters>::loadApiSchema(
        apiSchemaBasePath + "EdrxParameters.json");

    jsonParser::jsonParser<EllipsoidArc>::loadApiSchema(apiSchemaBasePath +
                                                        "EllipsoidArc.json");

    jsonParser::jsonParser<EllipsoidArc_allOf>::loadApiSchema(
        apiSchemaBasePath + "EllipsoidArc_allOf.json");

    jsonParser::jsonParser<EmergencyInfo>::loadApiSchema(apiSchemaBasePath +
                                                         "EmergencyInfo.json");

    jsonParser::jsonParser<EnhancedCoverageRestrictionData>::loadApiSchema(
        apiSchemaBasePath + "EnhancedCoverageRestrictionData.json");

    jsonParser::jsonParser<EpsInterworkingInfo>::loadApiSchema(
        apiSchemaBasePath + "EpsInterworkingInfo.json");

    jsonParser::jsonParser<EpsIwkPgw>::loadApiSchema(apiSchemaBasePath +
                                                     "EpsIwkPgw.json");

    jsonParser::jsonParser<ExpectedUeBehaviourData>::loadApiSchema(
        apiSchemaBasePath + "ExpectedUeBehaviourData.json");

    jsonParser::jsonParser<ExternalUnrelatedClass>::loadApiSchema(
        apiSchemaBasePath + "ExternalUnrelatedClass.json");

    jsonParser::jsonParser<FrameRouteInfo>::loadApiSchema(
        apiSchemaBasePath + "FrameRouteInfo.json");

    jsonParser::jsonParser<GADShape>::loadApiSchema(apiSchemaBasePath +
                                                    "GADShape.json");

    jsonParser::jsonParser<GNbId>::loadApiSchema(apiSchemaBasePath +
                                                 "GNbId.json");

    jsonParser::jsonParser<GeographicArea>::loadApiSchema(
        apiSchemaBasePath + "GeographicArea.json");

    jsonParser::jsonParser<GeographicalCoordinates>::loadApiSchema(
        apiSchemaBasePath + "GeographicalCoordinates.json");

    jsonParser::jsonParser<GlobalRanNodeId>::loadApiSchema(
        apiSchemaBasePath + "GlobalRanNodeId.json");

    jsonParser::jsonParser<GroupIdentifiers>::loadApiSchema(
        apiSchemaBasePath + "GroupIdentifiers.json");

    jsonParser::jsonParser<IdTranslationResult>::loadApiSchema(
        apiSchemaBasePath + "IdTranslationResult.json");

    jsonParser::jsonParser<InvalidParam>::loadApiSchema(apiSchemaBasePath +
                                                        "InvalidParam.json");

    jsonParser::jsonParser<IpAddress>::loadApiSchema(apiSchemaBasePath +
                                                     "IpAddress.json");

    jsonParser::jsonParser<LcsBroadcastAssistanceTypesData>::loadApiSchema(
        apiSchemaBasePath + "LcsBroadcastAssistanceTypesData.json");

    jsonParser::jsonParser<LcsClientClass>::loadApiSchema(
        apiSchemaBasePath + "LcsClientClass.json");

    jsonParser::jsonParser<LcsClientExternal>::loadApiSchema(
        apiSchemaBasePath + "LcsClientExternal.json");

    jsonParser::jsonParser<LcsClientGroupExternal>::loadApiSchema(
        apiSchemaBasePath + "LcsClientGroupExternal.json");

    jsonParser::jsonParser<LcsMoData>::loadApiSchema(apiSchemaBasePath +
                                                     "LcsMoData.json");

    jsonParser::jsonParser<LcsMoServiceClass>::loadApiSchema(
        apiSchemaBasePath + "LcsMoServiceClass.json");

    jsonParser::jsonParser<LcsPrivacyData>::loadApiSchema(
        apiSchemaBasePath + "LcsPrivacyData.json");

    jsonParser::jsonParser<LocationArea>::loadApiSchema(apiSchemaBasePath +
                                                        "LocationArea.json");

    jsonParser::jsonParser<LocationPrivacyInd>::loadApiSchema(
        apiSchemaBasePath + "LocationPrivacyInd.json");

    jsonParser::jsonParser<Lpi>::loadApiSchema(apiSchemaBasePath + "Lpi.json");

    jsonParser::jsonParser<LteV2xAuth>::loadApiSchema(apiSchemaBasePath +
                                                      "LteV2xAuth.json");

    jsonParser::jsonParser<MdtUserConsent>::loadApiSchema(
        apiSchemaBasePath + "MdtUserConsent.json");

    jsonParser::jsonParser<ModificationNotification>::loadApiSchema(
        apiSchemaBasePath + "ModificationNotification.json");

    jsonParser::jsonParser<Ncgi>::loadApiSchema(apiSchemaBasePath +
                                                "Ncgi.json");

    jsonParser::jsonParser<NetworkAreaInfo>::loadApiSchema(
        apiSchemaBasePath + "NetworkAreaInfo.json");

    jsonParser::jsonParser<NiddInformation>::loadApiSchema(
        apiSchemaBasePath + "NiddInformation.json");

    jsonParser::jsonParser<NokiaDnnInfoAttributes>::loadApiSchema(
        apiSchemaBasePath + "NokiaDnnInfoAttributes.json");

    jsonParser::jsonParser<NotifyItem>::loadApiSchema(apiSchemaBasePath +
                                                      "NotifyItem.json");

    jsonParser::jsonParser<NrV2xAuth>::loadApiSchema(apiSchemaBasePath +
                                                     "NrV2xAuth.json");

    jsonParser::jsonParser<Nssai>::loadApiSchema(apiSchemaBasePath +
                                                 "Nssai.json");

    jsonParser::jsonParser<NullValue>::loadApiSchema(apiSchemaBasePath +
                                                     "NullValue.json");

    jsonParser::jsonParser<OdbPacketServices>::loadApiSchema(
        apiSchemaBasePath + "OdbPacketServices.json");

    jsonParser::jsonParser<OperationMode>::loadApiSchema(apiSchemaBasePath +
                                                         "OperationMode.json");

    jsonParser::jsonParser<PatchResult>::loadApiSchema(apiSchemaBasePath +
                                                       "PatchResult.json");

    jsonParser::jsonParser<PduSession>::loadApiSchema(apiSchemaBasePath +
                                                      "PduSession.json");

    jsonParser::jsonParser<PduSessionContinuityInd>::loadApiSchema(
        apiSchemaBasePath + "PduSessionContinuityInd.json");

    jsonParser::jsonParser<PduSessionType>::loadApiSchema(
        apiSchemaBasePath + "PduSessionType.json");

    jsonParser::jsonParser<PduSessionTypes>::loadApiSchema(
        apiSchemaBasePath + "PduSessionTypes.json");

    jsonParser::jsonParser<PgwInfo>::loadApiSchema(apiSchemaBasePath +
                                                   "PgwInfo.json");

    jsonParser::jsonParser<PlmnEcInfo>::loadApiSchema(apiSchemaBasePath +
                                                      "PlmnEcInfo.json");

    jsonParser::jsonParser<PlmnId>::loadApiSchema(apiSchemaBasePath +
                                                  "PlmnId.json");

    jsonParser::jsonParser<PlmnOperatorClass>::loadApiSchema(
        apiSchemaBasePath + "PlmnOperatorClass.json");

    jsonParser::jsonParser<Point>::loadApiSchema(apiSchemaBasePath +
                                                 "Point.json");

    jsonParser::jsonParser<PointAltitude>::loadApiSchema(apiSchemaBasePath +
                                                         "PointAltitude.json");

    jsonParser::jsonParser<PointAltitudeUncertainty>::loadApiSchema(
        apiSchemaBasePath + "PointAltitudeUncertainty.json");

    jsonParser::jsonParser<PointAltitudeUncertainty_allOf>::loadApiSchema(
        apiSchemaBasePath + "PointAltitudeUncertainty_allOf.json");

    jsonParser::jsonParser<PointAltitude_allOf>::loadApiSchema(
        apiSchemaBasePath + "PointAltitude_allOf.json");

    jsonParser::jsonParser<PointUncertaintyCircle>::loadApiSchema(
        apiSchemaBasePath + "PointUncertaintyCircle.json");

    jsonParser::jsonParser<PointUncertaintyCircle_allOf>::loadApiSchema(
        apiSchemaBasePath + "PointUncertaintyCircle_allOf.json");

    jsonParser::jsonParser<PointUncertaintyEllipse>::loadApiSchema(
        apiSchemaBasePath + "PointUncertaintyEllipse.json");

    jsonParser::jsonParser<PointUncertaintyEllipse_allOf>::loadApiSchema(
        apiSchemaBasePath + "PointUncertaintyEllipse_allOf.json");

    jsonParser::jsonParser<Point_allOf>::loadApiSchema(apiSchemaBasePath +
                                                       "Point_allOf.json");

    jsonParser::jsonParser<Polygon>::loadApiSchema(apiSchemaBasePath +
                                                   "Polygon.json");

    jsonParser::jsonParser<Polygon_allOf>::loadApiSchema(apiSchemaBasePath +
                                                         "Polygon_allOf.json");

    jsonParser::jsonParser<PreemptionCapability>::loadApiSchema(
        apiSchemaBasePath + "PreemptionCapability.json");

    jsonParser::jsonParser<PreemptionVulnerability>::loadApiSchema(
        apiSchemaBasePath + "PreemptionVulnerability.json");

    jsonParser::jsonParser<PrivacyCheckRelatedAction>::loadApiSchema(
        apiSchemaBasePath + "PrivacyCheckRelatedAction.json");

    jsonParser::jsonParser<ProblemDetails>::loadApiSchema(
        apiSchemaBasePath + "ProblemDetails.json");

    jsonParser::jsonParser<PtwParameters>::loadApiSchema(apiSchemaBasePath +
                                                         "PtwParameters.json");

    jsonParser::jsonParser<RatType>::loadApiSchema(apiSchemaBasePath +
                                                   "RatType.json");

    jsonParser::jsonParser<ReportItem>::loadApiSchema(apiSchemaBasePath +
                                                      "ReportItem.json");

    jsonParser::jsonParser<RestrictionType>::loadApiSchema(
        apiSchemaBasePath + "RestrictionType.json");

    jsonParser::jsonParser<ScheduledCommunicationTime>::loadApiSchema(
        apiSchemaBasePath + "ScheduledCommunicationTime.json");

    jsonParser::jsonParser<ScheduledCommunicationType>::loadApiSchema(
        apiSchemaBasePath + "ScheduledCommunicationType.json");

    jsonParser::jsonParser<SdmSubsModification>::loadApiSchema(
        apiSchemaBasePath + "SdmSubsModification.json");

    jsonParser::jsonParser<SdmSubscription>::loadApiSchema(
        apiSchemaBasePath + "SdmSubscription.json");

    jsonParser::jsonParser<ServiceAreaRestriction>::loadApiSchema(
        apiSchemaBasePath + "ServiceAreaRestriction.json");

    jsonParser::jsonParser<ServiceTypeUnrelatedClass>::loadApiSchema(
        apiSchemaBasePath + "ServiceTypeUnrelatedClass.json");

    jsonParser::jsonParser<SessionManagementSubscriptionData>::loadApiSchema(
        apiSchemaBasePath + "SessionManagementSubscriptionData.json");

    jsonParser::jsonParser<SharedData>::loadApiSchema(apiSchemaBasePath +
                                                      "SharedData.json");

    jsonParser::jsonParser<SmfSelectionSubscriptionData>::loadApiSchema(
        apiSchemaBasePath + "SmfSelectionSubscriptionData.json");

    jsonParser::jsonParser<SmsManagementSubscriptionData>::loadApiSchema(
        apiSchemaBasePath + "SmsManagementSubscriptionData.json");

    jsonParser::jsonParser<SmsSubscriptionData>::loadApiSchema(
        apiSchemaBasePath + "SmsSubscriptionData.json");

    jsonParser::jsonParser<SmsfInfo>::loadApiSchema(apiSchemaBasePath +
                                                    "SmsfInfo.json");

    jsonParser::jsonParser<Snssai>::loadApiSchema(apiSchemaBasePath +
                                                  "Snssai.json");

    jsonParser::jsonParser<SnssaiInfo>::loadApiSchema(apiSchemaBasePath +
                                                      "SnssaiInfo.json");

    jsonParser::jsonParser<SorInfo>::loadApiSchema(apiSchemaBasePath +
                                                   "SorInfo.json");

    jsonParser::jsonParser<SorUpdateIndicator>::loadApiSchema(
        apiSchemaBasePath + "SorUpdateIndicator.json");

    jsonParser::jsonParser<SorUpdateInfo>::loadApiSchema(apiSchemaBasePath +
                                                         "SorUpdateInfo.json");

    jsonParser::jsonParser<SscMode>::loadApiSchema(apiSchemaBasePath +
                                                   "SscMode.json");

    jsonParser::jsonParser<SscModes>::loadApiSchema(apiSchemaBasePath +
                                                    "SscModes.json");

    jsonParser::jsonParser<StationaryIndication>::loadApiSchema(
        apiSchemaBasePath + "StationaryIndication.json");

    jsonParser::jsonParser<SteeringContainer>::loadApiSchema(
        apiSchemaBasePath + "SteeringContainer.json");

    jsonParser::jsonParser<SteeringInfo>::loadApiSchema(apiSchemaBasePath +
                                                        "SteeringInfo.json");

    jsonParser::jsonParser<SubscribedDefaultQos>::loadApiSchema(
        apiSchemaBasePath + "SubscribedDefaultQos.json");

    jsonParser::jsonParser<SubscriptionDataSets>::loadApiSchema(
        apiSchemaBasePath + "SubscriptionDataSets.json");

    jsonParser::jsonParser<SuggestedPacketNumDl>::loadApiSchema(
        apiSchemaBasePath + "SuggestedPacketNumDl.json");

    jsonParser::jsonParser<SupportedGADShapes>::loadApiSchema(
        apiSchemaBasePath + "SupportedGADShapes.json");

    jsonParser::jsonParser<SupportedGADShapes_anyOf>::loadApiSchema(
        apiSchemaBasePath + "SupportedGADShapes_anyOf.json");

    jsonParser::jsonParser<Tai>::loadApiSchema(apiSchemaBasePath + "Tai.json");

    jsonParser::jsonParser<TraceData>::loadApiSchema(apiSchemaBasePath +
                                                     "TraceData.json");

    jsonParser::jsonParser<TraceDataResponse>::loadApiSchema(
        apiSchemaBasePath + "TraceDataResponse.json");

    jsonParser::jsonParser<TraceDepth>::loadApiSchema(apiSchemaBasePath +
                                                      "TraceDepth.json");

    jsonParser::jsonParser<TrafficProfile>::loadApiSchema(
        apiSchemaBasePath + "TrafficProfile.json");

    jsonParser::jsonParser<UeAuth>::loadApiSchema(apiSchemaBasePath +
                                                  "UeAuth.json");

    jsonParser::jsonParser<UeContextInAmfData>::loadApiSchema(
        apiSchemaBasePath + "UeContextInAmfData.json");

    jsonParser::jsonParser<UeContextInSmfData>::loadApiSchema(
        apiSchemaBasePath + "UeContextInSmfData.json");

    jsonParser::jsonParser<UeContextInSmsfData>::loadApiSchema(
        apiSchemaBasePath + "UeContextInSmsfData.json");

    jsonParser::jsonParser<UeId>::loadApiSchema(apiSchemaBasePath +
                                                "UeId.json");

    jsonParser::jsonParser<UncertaintyEllipse>::loadApiSchema(
        apiSchemaBasePath + "UncertaintyEllipse.json");

    jsonParser::jsonParser<UnrelatedClass>::loadApiSchema(
        apiSchemaBasePath + "UnrelatedClass.json");

    jsonParser::jsonParser<UpConfidentiality>::loadApiSchema(
        apiSchemaBasePath + "UpConfidentiality.json");

    jsonParser::jsonParser<UpIntegrity>::loadApiSchema(apiSchemaBasePath +
                                                       "UpIntegrity.json");

    jsonParser::jsonParser<UpSecurity>::loadApiSchema(apiSchemaBasePath +
                                                      "UpSecurity.json");

    jsonParser::jsonParser<UpuData>::loadApiSchema(apiSchemaBasePath +
                                                   "UpuData.json");

    jsonParser::jsonParser<UpuInfo>::loadApiSchema(apiSchemaBasePath +
                                                   "UpuInfo.json");

    jsonParser::jsonParser<V2xSubscriptionData>::loadApiSchema(
        apiSchemaBasePath + "V2xSubscriptionData.json");

    jsonParser::jsonParser<ValidTimePeriod>::loadApiSchema(
        apiSchemaBasePath + "ValidTimePeriod.json");

    jsonParser::jsonParser<VnGroupData>::loadApiSchema(apiSchemaBasePath +
                                                       "VnGroupData.json");

    jsonParser::jsonParser<VzDnnConf>::loadApiSchema(apiSchemaBasePath +
                                                     "VzDnnConf.json");

    // register server handler

    server.register_handler<GET>(
        "/:supi/am-data",
        &AccessAndMobilitySubscriptionDataRetrievalApi::get_am_data_handler);

    server.register_handler<GET>(
        "/:supi/am-data/ecr-data",
        &EnhancedCoverageRestrictionDataRetrievalApi::get_ecr_data_handler);

    server.register_handler<GET>(
        "/:ueId/id-translation-result",
        &GPSIToSUPITranslationApi::get_supi_or_gpsi_handler);

    server.register_handler<GET>(
        "/group-data/group-identifiers",
        &GroupIdentifiersApi::get_group_identifiers_handler);

    server.register_handler<GET>(
        "/:supi/lcs-bca-data",
        &LCSBroadcastAssistanceDataTypesRetrievalApi::get_lcs_bca_data_handler);

    server.register_handler<GET>(
        "/:supi/lcs-mo-data",
        &LCSMobileOriginatedDataRetrievalApi::get_lcs_mo_data_handler);

    server.register_handler<GET>(
        "/:ueId/lcs-privacy-data",
        &LCSPrivacyDataRetrievalApi::get_lcs_privacy_data_handler);

    server.register_handler<PUT>(
        "/:supi/am-data/cag-ack",
        &ProvidingAcknowledgementOfCAGUpdateApi::c_ag_ack_handler);

    server.register_handler<PUT>(
        "/:supi/am-data/subscribed-snssais-ack",
        &ProvidingAcknowledgementOfSNSSAIsUpdateApi::s_nssais_ack_handler);

    server.register_handler<PUT>(
        "/:supi/am-data/sor-ack",
        &ProvidingAcknowledgementOfSteeringOfRoamingApi::sor_ack_info_handler);

    server.register_handler<PUT>(
        "/:supi/am-data/upu-ack",
        &ProvidingAcknowledgementOfUEParametersUpdateApi::upu_ack_handler);

    server.register_handler<GET>(
        "/:supi", &RetrievalOfMultipleDataSetsApi::get_data_sets_handler);

    server.register_handler<GET>(
        "/shared-data", &RetrievalOfSharedDataApi::get_shared_data_handler);

    server.register_handler<GET>(
        "/:supi/smf-select-data",
        &SMFSelectionSubscriptionDataRetrievalApi::get_smf_sel_data_handler);

    server.register_handler<GET>(
        "/:supi/sms-mng-data",
        &SMSManagementSubscriptionDataRetrievalApi::get_sms_mngt_data_handler);

    server.register_handler<GET>(
        "/:supi/sms-data",
        &SMSSubscriptionDataRetrievalApi::get_sms_data_handler);

    server.register_handler<GET>(
        "/:supi/sm-data",
        &SessionManagementSubscriptionDataRetrievalApi::get_sm_data_handler);

    server.register_handler<GET>(
        "/:supi/nssai",
        &SliceSelectionSubscriptionDataRetrievalApi::get_nssai_handler);

    server.register_handler<POST>("/:ueId/sdm-subscriptions",
                                  &SubscriptionCreationApi::subscribe_handler);

    server.register_handler<POST>("/shared-data-subscriptions",
                                  &SubscriptionCreationForSharedDataApi::
                                      subscribe_to_shared_data_handler);

    server.register_handler<DELETE>(
        "/:ueId/sdm-subscriptions/:subscriptionId",
        &SubscriptionDeletionApi::unsubscribe_handler);

    server.register_handler<DELETE>(
        "/shared-data-subscriptions/:subscriptionId",
        &SubscriptionDeletionForSharedDataApi::
            unsubscribe_for_shared_data_handler);

    server.register_handler<PATCH>(
        "/:ueId/sdm-subscriptions/:subscriptionId",
        &SubscriptionModificationApi::modify_handler);

    server.register_handler<PATCH>(
        "/shared-data-subscriptions/:subscriptionId",
        &SubscriptionModificationApi::modify_shared_data_subs_handler);

    server.register_handler<GET>(
        "/:supi/trace-data",
        &TraceConfigurationDataRetrievalApi::get_trace_config_data_handler);

    server.register_handler<POST>(
        "/:supi/am-data/update-sor",
        &TriggerSORInfoUpdateApi::update_sor_info_handler);

    server.register_handler<GET>(
        "/:supi/ue-context-in-amf-data",
        &UEContextInAMFDataRetrievalApi::get_ue_ctx_in_amf_data_handler);

    server.register_handler<GET>(
        "/:supi/ue-context-in-smf-data",
        &UEContextInSMFDataRetrievalApi::get_ue_ctx_in_smf_data_handler);

    server.register_handler<GET>(
        "/:supi/ue-context-in-smsf-data",
        &UEContextInSMSFDataRetrievalApi::get_ue_ctx_in_smsf_data_handler);

    server.register_handler<GET>(
        "/:supi/v2x-data",
        &V2XSubscriptionDataRetrievalApi::get_v2x_data_handler);

    // ssl? server start
    if (argc >= 6) {
      boost::asio::ssl::context tls(boost::asio::ssl::context::sslv23);
      tls.use_private_key_file(argv[4], boost::asio::ssl::context::pem);
      tls.use_certificate_chain_file(argv[5]);

      configure_tls_context_easy(ec, tls);

      if (server.listen_and_serve(ec, tls, addr, port)) {
        std::cerr << "error: " << ec.message() << std::endl;
      }
    } else {
      if (server.listen_and_serve(ec, addr, port)) {
        std::cerr << "error: " << ec.message() << std::endl;
      }
    }
  } catch (std::exception &e) {
    std::cerr << "exception: " << e.what() << "\n";
  }

  return 0;
}
