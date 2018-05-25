// Stewart Dulaney
// 5/22/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 8
// Problem 1
#include <iostream>
#include <cstdlib>

using namespace std;

void getNaturalNumber(int& n);
// Prompts the user to enter a positive integer until one is
// entered. Sets n equal to the natural number value input by
// the user.

bool isPrime(int n);
// Precondition: n > 1. By definition an integer greater than one
// is called a prime number if its only positive divisors (factors)
// are one and itself.
// Returns true if n is a prime number.

int nthFibonacci(int n);
// Precondition: n >= 0.
// Returns the nth number in the Fibonacci series.

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

// Uses iostream, cstdlib
bool isPrime(int n)
{
    if (n <= 1)
    {
        cout << "Error! Parameter n must be greater than 1.\n";
        exit(1);
    }
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

// Uses iostream, cstdlib
int nthFibonacci(int n)
{
    if (n < 0)
    {
        cout << "Error! Parameter n must be greater than or equal to 0.\n";
        exit(1);
    }
    if (n <= 1)
    {
        return n;
    }
    return (nthFibonacci(n - 1) + nthFibonacci(n - 2));
}

