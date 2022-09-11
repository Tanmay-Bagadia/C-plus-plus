#include <iostream>

using namespace std;

int main()
{
    // int x = 10;
    // int y = 20;
    // // std::cout << "x = ";
    // // std::cout << x;
    // // chaining cout
    // cout << "x = " << x << endl
    //      << "y = " << y;

    // exercise
    double sales = 95000;
    const double stateTaxRate = 0.04;
    const double countyTaxRate = 0.02;
    double stateTax = sales * stateTaxRate;
    double countyTax = sales * countyTaxRate;
    double totalTax = (stateTax) + (countyTax);
    // double stateTaxSales = (sales + (stateTax) / 100);
    // double finalTax = (stateTaxSales + (countyTax) / 100);
    cout << "Total sales: $" << sales << endl;
    cout << "State tax: $" << stateTax << endl;
    cout << "County tax: $" << countyTax << endl;
    cout << "Total tax: $" << totalTax << endl;
    return 0;
}