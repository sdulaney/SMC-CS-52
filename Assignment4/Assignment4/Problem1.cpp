// Stewart Dulaney
// 3/29/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 4
// Problem 1
#include <iostream>
#include <cstdlib>

using namespace std;

int power(int x, int n);
// Precondition: n is a nonnegative integer.
// Returns x to the power n.

int main()
{
    for (int i = 0; i <= 20; i++)
    {
        cout << "2 to the power " << i << " is equal to: " << power(2, i) << endl;
    }
    
    return 0;
}

// Uses iostream, cstdlib:
int power(int x, int n)
{
    if (n < 0)
    {
        cout << "Error! The argument n must be a nonnegative integer." << endl;
        exit(1);
    }
    else if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return x;
    }
    else if ((n % 2) == 0)  // n is even
    {
        return (power(x, n / 2) * power(x, n / 2));
    }
    else                    // n is odd
    {
        return (power(x, n / 2) * power(x, n / 2) * x);
    }
}
