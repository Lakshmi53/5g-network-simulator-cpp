#include "core/CoreNetwork.h"
#include <iostream>

Message CoreNetwork::handleNASMessage(const Message& msg) {
    std::cout << "Core Network authenticating UE" << std::endl;

    return {
        MessageType::NAS_REGISTRATION_ACCEPT,
        100,
        msg.senderId,
        "UE registration successful"
    };
}
