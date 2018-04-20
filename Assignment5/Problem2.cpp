// Stewart Dulaney
// 4/20/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 5
// Problem 2
#include <iostream>

using namespace std;

int fac(int n);
// Precondition: n >= 0 and n < 100.
// Returns the value of n!.

int main()
{
    int userInput, factorial;
    cout << "Please enter a number: ";
    cin >> userInput;
    try {
        factorial = fac(userInput);
        cout << userInput << "! = " << factorial << endl;
    } catch (const char* e) {
        cout << e << endl;
    }
    
    return 0;
}

int fac(int n)
{
    if (n < 0)
    {
        throw "Error! The parameter n must be a nonnegative integer.";
    }
    if (n >= 100)
    {
        throw "Error! The parameter n must be less than 100.";
    }
    // Base case
    if (n == 0)
    {
        return 1;
    }
    // Recursive case
    return (n * fac(n - 1));
}
