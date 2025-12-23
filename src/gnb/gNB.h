#pragma once
#include "common/Message.h"

class gNB {
public:
    Message handleRRCMessage(const Message& msg);
};
