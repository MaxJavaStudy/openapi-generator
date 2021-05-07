/**
* Nudm_UECM
* Nudm Context Management Service. � 2020, 3GPP Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved. 
*
* The version of the OpenAPI document: 1.1.2
* 
*
* NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
* https://openapi-generator.tech
* Do not edit the class manually.
*/


#include "pistache/endpoint.h"
#include "pistache/http.h"
#include "pistache/router.h"
#ifdef __linux__
#include <vector>
#include <signal.h>
#include <unistd.h>
#endif

#include "AMF3GppAccessRegistrationInfoRetrievalApiImpl.h"
#include "AMFNon3GPPAccessRegistrationInfoRetrievalApiImpl.h"
#include "AMFRegistrationFor3GPPAccessApiImpl.h"
#include "AMFRegistrationForNon3GPPAccessApiImpl.h"
#include "IPSMGWDeregistrationApiImpl.h"
#include "IPSMGWRegistrationApiImpl.h"
#include "IPSMGWRegistrationInfoRetrievalApiImpl.h"
#include "PEIUpdateApiImpl.h"
#include "ParameterUpdateInTheAMFRegistrationFor3GPPAccessApiImpl.h"
#include "ParameterUpdateInTheAMFRegistrationForNon3GPPAccessApiImpl.h"
#include "RetrieveSMFRegistrationApiImpl.h"
#include "SMFDeregistrationApiImpl.h"
#include "SMFSmfRegistrationApiImpl.h"
#include "SMSF3GPPAccessRegistrationInfoRetrievalApiImpl.h"
#include "SMSFDeregistrationFor3GPPAccessApiImpl.h"
#include "SMSFDeregistrationForNon3GPPAccessApiImpl.h"
#include "SMSFNon3GPPAccessRegistrationInfoRetrievalApiImpl.h"
#include "SMSFRegistrationFor3GPPAccessApiImpl.h"
#include "SMSFRegistrationForNon3GPPAccessApiImpl.h"
#include "TriggerAMFFor3GPPAccessDeregistrationApiImpl.h"
#include "TriggerPCSCFRestorationApiImpl.h"
#include "UECMRegistrationInfoRetrievalApiImpl.h"
#include "UELocationInformationRetrievalApiImpl.h"

#define PISTACHE_SERVER_THREADS     2
#define PISTACHE_SERVER_MAX_REQUEST_SIZE 32768
#define PISTACHE_SERVER_MAX_RESPONSE_SIZE 32768

static Pistache::Http::Endpoint *httpEndpoint;
#ifdef __linux__
static void sigHandler [[noreturn]] (int sig){
    switch(sig){
        case SIGINT:
        case SIGQUIT:
        case SIGTERM:
        case SIGHUP:
        default:
            httpEndpoint->shutdown();
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
    sa.sa_mask    = blocking_mask;
    sa.sa_flags   = 0;

    for (auto sig : quitSignals)
        sigaction(sig, &sa, nullptr);
}
#endif

using namespace org::openapitools::server::api;

int main() {
#ifdef __linux__
    std::vector<int> sigs{SIGQUIT, SIGINT, SIGTERM, SIGHUP};
    setUpUnixSignals(sigs);
#endif
    Pistache::Address addr(Pistache::Ipv4::any(), Pistache::Port(8080));

    httpEndpoint = new Pistache::Http::Endpoint((addr));
    auto router = std::make_shared<Pistache::Rest::Router>();

    auto opts = Pistache::Http::Endpoint::options()
        .threads(PISTACHE_SERVER_THREADS);
    opts.flags(Pistache::Tcp::Options::ReuseAddr);
    opts.maxRequestSize(PISTACHE_SERVER_MAX_REQUEST_SIZE);
    opts.maxResponseSize(PISTACHE_SERVER_MAX_RESPONSE_SIZE);
    httpEndpoint->init(opts);

    
    AMF3GppAccessRegistrationInfoRetrievalApiImpl AMF3GppAccessRegistrationInfoRetrievalApiserver(router);
    AMF3GppAccessRegistrationInfoRetrievalApiserver.init();
    AMFNon3GPPAccessRegistrationInfoRetrievalApiImpl AMFNon3GPPAccessRegistrationInfoRetrievalApiserver(router);
    AMFNon3GPPAccessRegistrationInfoRetrievalApiserver.init();
    AMFRegistrationFor3GPPAccessApiImpl AMFRegistrationFor3GPPAccessApiserver(router);
    AMFRegistrationFor3GPPAccessApiserver.init();
    AMFRegistrationForNon3GPPAccessApiImpl AMFRegistrationForNon3GPPAccessApiserver(router);
    AMFRegistrationForNon3GPPAccessApiserver.init();
    IPSMGWDeregistrationApiImpl IPSMGWDeregistrationApiserver(router);
    IPSMGWDeregistrationApiserver.init();
    IPSMGWRegistrationApiImpl IPSMGWRegistrationApiserver(router);
    IPSMGWRegistrationApiserver.init();
    IPSMGWRegistrationInfoRetrievalApiImpl IPSMGWRegistrationInfoRetrievalApiserver(router);
    IPSMGWRegistrationInfoRetrievalApiserver.init();
    PEIUpdateApiImpl PEIUpdateApiserver(router);
    PEIUpdateApiserver.init();
    ParameterUpdateInTheAMFRegistrationFor3GPPAccessApiImpl ParameterUpdateInTheAMFRegistrationFor3GPPAccessApiserver(router);
    ParameterUpdateInTheAMFRegistrationFor3GPPAccessApiserver.init();
    ParameterUpdateInTheAMFRegistrationForNon3GPPAccessApiImpl ParameterUpdateInTheAMFRegistrationForNon3GPPAccessApiserver(router);
    ParameterUpdateInTheAMFRegistrationForNon3GPPAccessApiserver.init();
    RetrieveSMFRegistrationApiImpl RetrieveSMFRegistrationApiserver(router);
    RetrieveSMFRegistrationApiserver.init();
    SMFDeregistrationApiImpl SMFDeregistrationApiserver(router);
    SMFDeregistrationApiserver.init();
    SMFSmfRegistrationApiImpl SMFSmfRegistrationApiserver(router);
    SMFSmfRegistrationApiserver.init();
    SMSF3GPPAccessRegistrationInfoRetrievalApiImpl SMSF3GPPAccessRegistrationInfoRetrievalApiserver(router);
    SMSF3GPPAccessRegistrationInfoRetrievalApiserver.init();
    SMSFDeregistrationFor3GPPAccessApiImpl SMSFDeregistrationFor3GPPAccessApiserver(router);
    SMSFDeregistrationFor3GPPAccessApiserver.init();
    SMSFDeregistrationForNon3GPPAccessApiImpl SMSFDeregistrationForNon3GPPAccessApiserver(router);
    SMSFDeregistrationForNon3GPPAccessApiserver.init();
    SMSFNon3GPPAccessRegistrationInfoRetrievalApiImpl SMSFNon3GPPAccessRegistrationInfoRetrievalApiserver(router);
    SMSFNon3GPPAccessRegistrationInfoRetrievalApiserver.init();
    SMSFRegistrationFor3GPPAccessApiImpl SMSFRegistrationFor3GPPAccessApiserver(router);
    SMSFRegistrationFor3GPPAccessApiserver.init();
    SMSFRegistrationForNon3GPPAccessApiImpl SMSFRegistrationForNon3GPPAccessApiserver(router);
    SMSFRegistrationForNon3GPPAccessApiserver.init();
    TriggerAMFFor3GPPAccessDeregistrationApiImpl TriggerAMFFor3GPPAccessDeregistrationApiserver(router);
    TriggerAMFFor3GPPAccessDeregistrationApiserver.init();
    TriggerPCSCFRestorationApiImpl TriggerPCSCFRestorationApiserver(router);
    TriggerPCSCFRestorationApiserver.init();
    UECMRegistrationInfoRetrievalApiImpl UECMRegistrationInfoRetrievalApiserver(router);
    UECMRegistrationInfoRetrievalApiserver.init();
    UELocationInformationRetrievalApiImpl UELocationInformationRetrievalApiserver(router);
    UELocationInformationRetrievalApiserver.init();

    httpEndpoint->setHandler(router->handler());
    httpEndpoint->serve();

    httpEndpoint->shutdown();

}

