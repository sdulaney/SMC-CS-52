// Stewart Dulaney
// 5/22/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 8
// Problem 1
#include <iostream>

using namespace std;

void getNaturalNumber(int& n);
// Prompts the user to enter a positive integer until one is
// entered. Sets n equal to the natural number value input by
// the user.

int main()
{
    int n;
    getNaturalNumber(n);
    
    return 0;
}

// Uses iostream
void getNaturalNumber(int& n)
{
    cout << "Input: ";
    int userInput;
    cin >> userInput;
    do
    {
        if (userInput <= 0)
        {
            cout << "Input (>0): ";
            cin >> userInput;
        }
    } while (userInput <= 0);
    n = userInput;
}

