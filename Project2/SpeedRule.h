
#include "TrafficRule.h"

class SpeedRule : public TrafficRule
{
private:
    int privateLimit;
    int truckLimit;
    int busLimit;
    int fine;

public:
    SpeedRule(int p, int t, int b, int f);

    Violation* check(const CarRecord& car) override;
};

