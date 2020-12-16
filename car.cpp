#include <iostream>
// #include <map>
#include <car.h>
using namespace std;

class Car
{

    int carId; // enums
    int carType;
    // string carRegNumber

public:
    static int currentId = 0;
    Car(int ct)
    {
        carType = ct;
        ++currentId;
        carId = currentId;
    }
};

int main()
{
    cout << "hello world\n";
    return 0;
}