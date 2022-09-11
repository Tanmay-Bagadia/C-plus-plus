#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // double result = floor(1.2);
    // cout << result;

    // double powResult = pow(2, 3);
    // cout << powResult;

    // program to find area of a circle
    double radius;
    const double pi = 3.14;
    cout << "Enter radius of the circle: " << endl;
    cin >> radius;

    double areaOfCircle = pi * pow(radius, 2);
    cout << "The area of circle is: " << areaOfCircle;
    return 0;
}