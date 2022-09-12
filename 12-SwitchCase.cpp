#include <iostream>

using namespace std;

int main()
{
    int day = 4;
    switch (day)
    {
    case 2:
        cout << "Good morning";
        break;
    case 4:
        cout << "Good evening";
        break;
    case 6:
        cout << "Good afternoon";
        break;
    default:
        cout << "Have a great weekend";
        break;
    }
    return 0;
}