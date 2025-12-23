#pragma once
#include <string>

enum class MessageType {
    RRC_SETUP_REQUEST,
    RRC_SETUP_COMPLETE,
    NAS_REGISTRATION_REQUEST,
    NAS_REGISTRATION_ACCEPT
};

struct Message {
    MessageType type;
    int senderId;
    int receiverId;
    std::string payload;
};

