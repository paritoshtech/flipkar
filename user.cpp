#include <iostream>
#include <user.h>
//  # include <map>
using namespace std;
class User
{
    int userId;
    string email;
    string name;

public:
    static int currentId;
    User(string name, string e)
    {
        name = name;
        email = e;
    }
};