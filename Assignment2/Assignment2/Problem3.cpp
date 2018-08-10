// Stewart Dulaney
// 3/3/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 2
// Problem 3
#include <iostream>

using namespace std;

int main()
{
    double input, sum = 0.0, average;
    int count = 0;
    do {
        cout << "Number: ";
        cin >> input;
        if (input == -1.0)
        {
            break;
        }
        if (input < 0.0)
        {
            cout << "Invalid! Re-enter: ";
            cin >> input;
        }
        if (input >= 0.0)
        {
            sum += input;
            count++;
        }
    } while (input != -1.0);
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
    average = sum / count;
    cout << "Average: " << average << endl;
    
    return 0;
}
