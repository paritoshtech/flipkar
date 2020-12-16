#include <iostream>
#include <timeslot.h>
using namespace std;

class Pricing
{
    double multiplier[4] = {0, 1.5, 1.2, 2.0};
    double baseRate = 100; // 100/per hour
public:
    static double
    getPricing(int carType, string timeSlot,int pricingTYpe)
    {
        Timeslot ts = new Timeslot(timeSlot);

        double rate = baseRate * multiplier[carType];

        switch (pricingType)
        {
        case 'carType'
            break;
        
        default:
            break;
        }

        if (ts.startHour >= 9 and ts.startHour <= 12)
        {
            return rate * 1.5;
        }

        return rate;
    }
};