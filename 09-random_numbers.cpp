#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

    // srand(time(nullptr));
    // int random = rand() % 10;
    // cout << random;

    // rolling a dice

    srand(time(nullptr));
    const short maxValue = 6;
    const short minValue = 1;
    const short rollDice1 = (rand() % (maxValue - minValue + 1)) + minValue;
    const short rollDice2 = (rand() % (maxValue - minValue + 1)) + minValue;
    cout << rollDice1 << ',' << rollDice2;
    return 0;
}