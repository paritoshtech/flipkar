#include <iostream>
using namespace std;
class User
{
    int userId;
    string email;
    string name;

public:
    static int currentId;
    User(string name, string e);
};