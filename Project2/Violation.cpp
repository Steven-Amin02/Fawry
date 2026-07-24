#include "Violation.h"

Violation::Violation(string desc, int fine)
{
    description = desc;
    fineAmount = fine;
}

string Violation::getDescription() 
{
    return description;
}

int Violation::getFineAmount() 
{
    return fineAmount;
}