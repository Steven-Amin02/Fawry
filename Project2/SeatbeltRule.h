
#include "TrafficRule.h"

class SeatbeltRule : public TrafficRule
{
private:
    int fine;

public:
    SeatbeltRule(int f);

    Violation* check(const CarRecord& car) override;
};
