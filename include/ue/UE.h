#pragma once
#include "common/Message.h"

class UE {
    int ueId;

public:
    explicit UE(int id);
    Message createRRCSetupRequest();
    void handleMessage(const Message& msg);
};

