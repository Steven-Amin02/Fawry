#include "SpeedRule.h"

SpeedRule::SpeedRule(int p, int t, int b, int f)
{
    privateLimit = p;
    truckLimit = t;
    busLimit = b;
    fine = f;
}

Violation* SpeedRule::check(const CarRecord& car)
{
    int limit = 0;

    if (car.getCarType() == "Private")
        limit = privateLimit;
    else if (car.getCarType() == "Truck")
        limit = truckLimit;
    else
        limit = busLimit;

    if (car.getSpeed() > limit)
    {
        return new Violation(
            "Speed exceeded (" + to_string(car.getSpeed()) +
            ") max allowed " + to_string(limit),
            fine);
    }

    return nullptr;
}