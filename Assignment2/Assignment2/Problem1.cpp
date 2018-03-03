// Stewart Dulaney
// 2/28/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 2
// Problem 1
#include <iostream>

using namespace std;

int main()
{
    int num1, num2, num3, largest;
    cout << "Enter an integer: ";
    cin >> num1;
    cout << "Enter an integer: ";
    cin >> num2;
    cout << "Enter an integer: ";
    cin >> num3;
    if ((num1 >= num2) && (num1 >= num3))
    {
        largest = num1;
    }
    else if ((num2 >= num1) && (num2 >= num3))
    {
        largest = num2;
    }
    else if ((num3 >= num1) && (num3 >= num2))
    {
        largest = num3;
    }
    cout << "The largest number is: " << largest << endl;

    return 0;
}
