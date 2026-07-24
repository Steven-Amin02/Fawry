#include "Radar.h"

void Radar::addRule(TrafficRule* rule)
{
    rules.push_back(rule);
}

void Radar::process( CarRecord& car)
{
    TrafficFine fine(car.getPlateNumber());

    bool hasViolation = false;

    for (auto rule : rules)
    {
        Violation* v = rule->check(car);

        if (v != nullptr)
        {
            fine.addViolation(*v);
            statistics[v->getDescription()]++;
            hasViolation = true;
            delete v;
        }
    }

    if (hasViolation)
        fines.push_back(fine);
}

void Radar::printAllFines()
{
    for (auto fine : fines)
        fine.print();
}

void Radar::printStatistics()
{
    cout << "\nRule Statistics\n";

    for (auto item : statistics)
    {
        cout << item.first
            << " : "
            << item.second
            << endl;
    }
}