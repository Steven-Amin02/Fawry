#pragma once

#include <string>
using namespace std;

class Violation
{
private:
    string description;
    int fineAmount;

public:
    Violation(string desc, int fine);

    string getDescription() ;
    int getFineAmount() ;
};
