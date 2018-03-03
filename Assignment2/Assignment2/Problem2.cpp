// Stewart Dulaney
// 3/3/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 2
// Problem 2
#include <iostream>

using namespace std;

void add(double op1, double op2);
void subtract(double op1, double op2);
void multiply(double op1, double op2);
void divide(double op1, double op2);

int main()
{
    char operation;
    double operand1, operand2;
    cout << "Enter an operation to calculate (+, -, *, /): ";
    cin >> operation;
    cout << "Enter the first operand: ";
    cin >> operand1;
    cout << "Enter the second operand: ";
    cin >> operand2;
    switch (operation)
    {
        case '+':
            add(operand1, operand2);
            break;
        case '-':
            subtract(operand1, operand2);
            break;
        case '*':
            multiply(operand1, operand2);
            break;
        case '/':
            divide(operand1, operand2);
            break;
        default:
            cout << "Error! Invalid operation.\n";
    }
    
    return 0;
}

void add(double op1, double op2)
{
    cout << "The result of " << op1 << " + " << op2 << " is " << (op1 + op2) << ".\n";
}

void subtract(double op1, double op2)
{
    cout << "The result of " << op1 << " - " << op2 << " is " << (op1 - op2) << ".\n";
}

void multiply(double op1, double op2)
{
    cout << "The result of " << op1 << " * " << op2 << " is " << (op1 * op2) << ".\n";
}

void divide(double op1, double op2)
{
    if (op2 == 0.0)
    {
        cout << "Error! Cannot divide by zero.\n";
    }
    else
    {
        cout << "The result of " << op1 << " / " << op2 << " is " << (op1 / op2) << ".\n";
    }
}
