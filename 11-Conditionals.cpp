#include <iostream>

using namespace std;

int main()
{
    double i, j;
    cout << "Enter value for 'i': \n";
    cout << "Enter value for 'j': \n";

    cin >> i >> j;
    // if(i > j){
    //     cout << "'i' is greater than 'j'";
    // }else{
    //     cout << "'j' is greater than 'i'";
    // }
    string result = (i > j) ? "'i' is greater than 'j'" : "'j' is greater than 'i'";
    cout << result;
    return 0;
}