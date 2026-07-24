#pragma once

#include <string>
using namespace std;

class CarRecord
{
private:
    string plateNumber;
    string date;
    string carType;
    int speed;
    bool seatbeltFastened;

public:
    CarRecord(string plate, string d, string type, int s, bool seatbelt);

    string getPlateNumber() ;
    string getDate() const ;
    string getCarType() const ;
    int getSpeed() const;
    bool isSeatbeltFastened() const;
};

