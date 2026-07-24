#include "TrafficFine.h"
TrafficFine::TrafficFine(string plate)
{
    plateNumber = plate;
    totalAmount = 0;
}

void TrafficFine::addViolation(Violation v)
{
    violations.push_back(v);
    totalAmount += v.getFineAmount();
}

int TrafficFine::getTotalAmount()
{
    return totalAmount;
}

string TrafficFine::getPlateNumber()
{
    return plateNumber;
}

void TrafficFine::print()
{
    cout << "Traffic fine for car " << plateNumber << endl;
    cout << "Total amount: " << totalAmount << " EGP\n";
    cout << "Violations:\n";

    for (auto v : violations)
    {
        cout << "- "
            << v.getDescription()
            << " : "
            << v.getFineAmount()
            << " EGP\n";
    }
}