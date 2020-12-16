#include <iostream>
#include <car.h>
#include <booking.h>
#include <user.h>
// #include <map>
using namespace std;

void printAllCars(carList)
{
    for (auto car : carList)
        cout << " carType " << car.carType << " carId " << car.carId << "\n"
}
int main()
{
    vector<Car> carList;
    vector<Booking> bookingList;

    while (1)
    {
        int resp;
        cout << "Here is the Menu \n";

        cout << "Press 1 for onboarding new car \n";
        cout << "Press 2 for checking availability or creating a booking\n";
        // cout << "Press 3 from creating a booking\n";
        cout << "Press 3 from cancelling a booking\n";
        cin >> resp;

        switch (resp)
        {
        case 1:
            int carType;
            cout << "Enter Cartype \n Sedan:1 \nHatchback:2 \n SUV:3\n";
            cin >> carType;
            Car car = Car(carType) break;
            carList.push_back(car);
            printAllCars(carList);
        case 2:
            int carType;
            string timeSlot;
            cout << "Enter Cartype \n Sedan:1 \nHatchback:2 \n SUV:3\n";
            cin >> carType;
            cout << "Enter timeslot\n";
            cin >> timeSlot;

            if (Booking.getAvailablity(carType, timeSlot))
            {
                char resp;
                cout << "It is avalaible, would you like to book?\n  y/n ? \n ";
                cin >> resp;
                if (resp == 'y' || resp == 'Y')
                {
                    // get price

                    // show price
                    //ask for confirming booking
                    // ask for user details
                    // show booking Id
                }
            }
            else
            {
                cout << "Sorry , no cars available for this timeslot and car type\n";
            }
            break;
        case 3:
            int bookingId;
            cout << "please enter booking id for cancelation\n" cin >> bookingId;
            if (validateBookingId(bookingId))
            {
                cancelBooking(bookingId);
                cout << "Booking cancelled successfully\n"
            }
            else
            {
                cout << "Booking valid not valid\n";
            }

            break;

        default:
            cout << "Please enter a valid choice\n";
            break;
        }
    }
}
