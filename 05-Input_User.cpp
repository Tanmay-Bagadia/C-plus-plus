#include <iostream>

using namespace std;

int main()
{

    // cout << "Enter a value for 1st no. : " << endl;
    // cout << "Enter a value for 2nd no. : " << endl;
    // int userVal1;
    // int userVal2;
    // cin >> userVal1 >> userVal2;
    // cout << userVal1 + userVal2;

    // program to convert temperature from farenheit to celsius
    double farenheitTemp;
    double celsiusTemp;
    cout << "Program to convert temperature from farenheit to celsius" << endl;
    cout << "Enter temperature in Farenheit: " << endl;
    cin >> farenheitTemp;
    celsiusTemp = (farenheitTemp - 32.0) * (5 / 9);
    cout << "Celsius Temperature: " << celsiusTemp;
    return 0;
}
