#include "ue/UE.h"
#include <iostream>

UE::UE(int id) : ueId(id) {}

Message UE::createRRCSetupRequest() {
    return {
        MessageType::RRC_SETUP_REQUEST,
        ueId,
        1,
        "UE requesting RRC setup"
    };
}

void UE::handleMessage(const Message& msg) {
    std::cout << "UE received: " << msg.payload << std::endl;
}

