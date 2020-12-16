#include <string>
using namespace std;
class Booking
{
    int bookingId;
    int carId;
    int userId;
    string timeSlot;
    double price;

    static bool getAvailablity(int, string);
    static int getCarsForTimeSlot(int, string);
    static bool validateBookingId(string);
};