#include <iostream>

using namespace std;

int main()
{
    // Program to Print First 10 natural No.s
    // for (int i = 1; i < 11; i++)
    // {
    //     cout << i << "\n";
    // }

    // Program to print sum of first 10 natural no.s
    // int sum = 0;
    // for (int i = 1; i <= 10; i++)
    // {
    //     sum = sum + i;
    // }
    // cout << sum << "\n";

    // a program in C++ to display n terms of natural number and their sum.
    // int i, n;
    // int sum = 0;

    // cin >> i;

    // for (n = 1; n <= i; n++)
    // {
    //     cout << "The no.s till nth are: " << n << endl;
    //     sum = sum + n;
    // }
    // cout << "Sum of the numbers is: " << sum;

    // int num;
    // cin >> num;
    // for (int i = 0; num > i; i++)
    // {
    //     num = num / 10;

    //     cout << "No. of digits:" << i;
    //     return 0;
    // }
    // int tableNo = 50;
    // int counter = 10;
    // for (int i = 1; i <= counter; i++)
    // {
    //     int result = i * tableNo;
    //     cout << result << endl;
    // }

    //     int sum = 0;
    //     for (int i = 0; i < 10; i++)
    //     {
    //         int x;
    //         cout << "Enter a number\n";
    //         cin >> x;
    //         sum = sum + x;
    //     }
    //     cout << "The average value is " << sum / 10.0 << "\n";
    //     return 0;
    // }
    int sum = 0;
    for (int i = 0; i <= 10; i++)
    {
        sum = sum + i;
        cout << "Sum: " << sum << "\n";
    }
}