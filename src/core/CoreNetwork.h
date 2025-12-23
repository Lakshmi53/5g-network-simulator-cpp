#pragma once
#include "common/Message.h"

class CoreNetwork {
public:
    Message handleNASMessage(const Message& msg);
};
