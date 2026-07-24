#include "SeatbeltRule.h"

SeatbeltRule::SeatbeltRule(int f)
{
    fine = f;
}

Violation* SeatbeltRule::check(const CarRecord& car)
{
    if (!car.isSeatbeltFastened())
    {
        return new Violation("Seatbelt not fastened", fine);
    }

    return nullptr;
}