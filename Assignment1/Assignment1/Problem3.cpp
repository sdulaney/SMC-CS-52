// Stewart Dulaney
// Assignment 1
// Problem 3
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double STATE_TAX_RATE = 0.0725;
    const double COUNTY_TAX_RATE = 0.02;
    double price, stateTax, countyTax, totalPrice;
    
    cout << "Enter price: ";
    cin >> price;
    
    stateTax = price * STATE_TAX_RATE;
    countyTax = price * COUNTY_TAX_RATE;
    totalPrice = price + stateTax + countyTax;
    
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    
    cout << "Your total price is:" << endl;
    cout << "Item:       " << setw(7) << price << endl;
    cout << "State tax:  " << setw(7) << stateTax << endl;
    cout << "County tax: " << setw(7) << countyTax << endl;
    cout << "-------------------" << endl;
    cout << "Total Price:" << setw(7) << totalPrice << endl;
    
    return 0;
}
