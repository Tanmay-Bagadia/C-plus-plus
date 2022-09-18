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
    int i, n;
    int sum = 0;

    cin >> i;

    for (n = 1; n <= i; n++)
    {
        cout << "The no.s till nth are: " << n << endl;
        sum = sum + n;
    }
    cout << "Sum of the numbers is: " << sum;
}
