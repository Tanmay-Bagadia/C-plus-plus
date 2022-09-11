#include <iostream>

using namespace std;

int main()
{
    // string firstName;
    // string lastName;
    // cout << "Enter firstName: " << endl;
    // cout << "Enter lasttName: " << endl;
    // cin >> firstName >> lastName;
    // string fullName = firstName.append(lastName);
    // // string fullName = firstName + " " + lastName;
    // cout << "Full Name is: " << fullName;

    string userStr;
    cout << "Enter a string: ";
    cin >> userStr;
    cout << "The length of the string is: " << userStr.size() << endl;
    cout << userStr[0];
    return 0;
}