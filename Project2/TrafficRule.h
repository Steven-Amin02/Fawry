#pragma once

#include "CarRecord.h"
#include "Violation.h"

 class TrafficRule
{
public:
    virtual Violation* check(const CarRecord& car) = 0;
    virtual ~TrafficRule() {}
};
