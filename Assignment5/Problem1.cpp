// Stewart Dulaney
// 4/20/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 5
// Problem 1
#include <iostream>

using namespace std;

int recursive(unsigned int n);
// Precondition: n is a nonnegative integer.
// Returns n * n/3 * n/9 * n/27 * n/81... this sequence repeats
// as long as n/x > 0, where n/x is integer division. The quotient
// is always a multiple of 3 from the previous quotient.

int main()
{
    unsigned int userInput;
    cout << "Input: ";
    cin >> userInput;
    cout << "Result: " << recursive(userInput) << endl;
    
    return 0;
}

int recursive(unsigned int n)
{
    if (n <= 0)
    {
        return 1;
    }
    return n * recursive(n / 3);
}
