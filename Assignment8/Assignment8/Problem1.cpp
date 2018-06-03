// Stewart Dulaney
// 6/2/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 8
// Problem 1
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int getNaturalNumber();
// Prompts the user to enter a positive integer until one is
// entered. Returns the natural number value input by
// the user.

bool isPrime(int n);
// Precondition: n > 1. By definition an integer greater than one
// is called a prime number if its only positive divisors (factors)
// are one and itself.
// Returns true if n is a prime number.

int nthFibonacci(int n);
// Precondition: n >= 0.
// Returns the nth number in the Fibonacci series.

int getNthFibonacciPrime(int n);
// Precondition: n > 0.
// Returns the nth prime number in the Fibonacci series.

string getOrdinalNumberSuffix(int n);
// Precondition: n >= 0;
// Returns the ordinal number suffix for n, e.g. returns "st" for
// n=1, "nd" for n=2, "rd" for n=3, etc.

int main()
{
    int n = getNaturalNumber();
    int nthFibonacciPrime = getNthFibonacciPrime(n);
    cout << n << getOrdinalNumberSuffix(n) << " Fibonacci prime: " << nthFibonacciPrime << endl;
    
    return 0;
}

// Uses iostream
int getNaturalNumber()
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
    return userInput;
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

// Uses iostream, cstdlib
int getNthFibonacciPrime(int n)
{
    if (n <= 0)
    {
        cout << "Error! Parameter n must be greater than 0.\n";
        exit(1);
    }
    int fib = 2;
    int i = 3;          // 2 is the 3rd Fibonacci number
    int numPrimes = 1;  // 2 is the 1st prime number
    do
    {
        if (numPrimes == n)
        {
            return fib;
        }
        i++;
        fib = nthFibonacci(i);
        if (isPrime(fib))
        {
            numPrimes++;
        }
    } while (fib < INT_MAX);
    return -1;
}

// Uses iostream, string, cstdlib
string getOrdinalNumberSuffix(int n)
{
    if (n < 0)
    {
        cout << "Error! Parameter n must be greater than or equal to 0.\n";
        exit(1);
    }
    string result;
    if ((n % 100 >= 11) && (n % 100 <= 20))
    {
        result = "th";
    }
    else if (n % 10 == 1)
    {
        result = "st";
    }
    else if (n % 10 == 2)
    {
        result = "nd";
    }
    else if (n % 10 == 3)
    {
        result = "rd";
    }
    else
    {
        result = "th";
    }
    return result;
}
