#include "CarRecord.h"

CarRecord::CarRecord(string plate, string d, string type, int s, bool seatbelt)
{
    plateNumber = plate;
    date = d;
    carType = type;
    speed = s;
    seatbeltFastened = seatbelt;
}

string CarRecord::getPlateNumber() 
{
    return plateNumber;
}

string CarRecord::getDate() const
{
    return date;
}

string CarRecord::getCarType() const
{
    return carType;
}

int CarRecord::getSpeed() const
{
    return speed;
}

bool CarRecord::isSeatbeltFastened() const
{
    return seatbeltFastened;
}