#include "ue/UE.h"
#include "gnb/gNB.h"
#include "core/CoreNetwork.h"

int main() {
    UE ue(10);
    gNB gnb;
    CoreNetwork core;

    auto rrcReq = ue.createRRCSetupRequest();
    auto rrcResp = gnb.handleRRCMessage(rrcReq);
    ue.handleMessage(rrcResp);

    auto regResp = core.handleNASMessage(rrcReq);
    ue.handleMessage(regResp);

    return 0;
}
