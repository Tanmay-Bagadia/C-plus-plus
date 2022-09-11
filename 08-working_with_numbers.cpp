#include <iostream>

using namespace std;

int main()
{
    // int number = 0b11111111;
    // cout << number << endl;
    // int num = 0xFF;
    // cout << num << endl;

    // // stay away from unsigned keyword!
    // unsigned int num1 = -255;
    // num1--;
    // cout << num1;

    // narrowing
    short number = 100000;
    int another = number;
    cout << another;
    return 0;
}