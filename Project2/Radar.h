#pragma once

#include <vector>
#include <map>

#include "TrafficRule.h"
#include "TrafficFine.h"

using namespace std;

class Radar
{
private:
    vector<TrafficRule*> rules;
    vector<TrafficFine> fines;
    map<string, int> statistics;

public:
    void addRule(TrafficRule* rule);

    void process( CarRecord& car);

    void printAllFines();

    void printStatistics();
};

