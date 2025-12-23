#include "gnb/gNB.h"
#include <iostream>

Message gNB::handleRRCMessage(const Message& msg) {
    std::cout << "gNB processing RRC request" << std::endl;

    return {
        MessageType::RRC_SETUP_COMPLETE,
        1,
        msg.senderId,
        "RRC setup completed"
    };
}
