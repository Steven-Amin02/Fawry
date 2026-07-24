
#include <vector>
#include <string>
#include <iostream>

#include "Violation.h"

using namespace std;

class TrafficFine
{
private:
    string plateNumber;
    vector<Violation> violations;
    int totalAmount;

public:
    TrafficFine(string plate);

    void addViolation(Violation v);

    int getTotalAmount() const;

    string getPlateNumber() const;

    void print() const;
};

