#include "Radar.h"
#include "SpeedRule.h"
#include "SeatbeltRule.h"

int main()
{
    Radar radar;

    radar.addRule(new SpeedRule(80, 60, 70, 300));
    radar.addRule(new SeatbeltRule(100));

    CarRecord car1("AAA111", "1/1/2026", "Private", 94, false);
    CarRecord car2("BBB222", "2/2/2026", "Truck", 50, true);

    radar.process(car1);
    radar.process(car2);

    radar.printAllFines();

    radar.printStatistics();

    return 0;
}