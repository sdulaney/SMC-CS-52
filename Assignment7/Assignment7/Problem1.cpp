// File: Problem1.cpp
// Stewart Dulaney
// 5/29/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 7
// Problem 1
#include <iostream>
#include <cstdlib>
#include "Shape.h"
#include "Rectangle.h"
#include "Square.h"
#include "Circle.h"

using namespace std;

const int MAX_SHAPE_ARRAY_SIZE = 10;

void printShapeArray(Shape* arr[], int size);
// Prints the name and total area of each shape in the
// array arr to the console.

void addRectangle(int index);
// Precondition: index is a valid index into the array shapeArr.
// Postcondition: a Rectangle object with length and width input by
// the user has been instantiated. The array element in shapeArr at
// index equal to index now points to that object, and numShapes
// has been incremented.

void addSquare(int index);
// Precondition: index is a valid index into the array shapeArr.
// Postcondition: a Square object with side input by the user
// has been instantiated. The array element in shapeArr at index
// equal to index now points to that object, and numShapes has
// been incremented.

void addCircle(int index);
// Precondition: index is a valid index into the array shapeArr.
// Postcondition: a Circle object with radius input by the user
// has been instantiated. The array element in shapeArr at index
// equal to index now points to that object, and numShapes has
// been incremented.

Shape* shapeArr[MAX_SHAPE_ARRAY_SIZE];
int numShapes = 0;

int main()
{
    
    char ans;
    int menuOption;
    
    do {
        cout << "[1] Create Rectangle\n"
        << "[2] Create Square\n"
        << "[3] Create Circle\n"
        << "[4] Print Shapes created so far\n"
        << "Please enter a number for one of the menu options above: ";
        cin >> menuOption;
        
        switch (menuOption)
        {
            case 1:
                addRectangle(numShapes);
                break;
            case 2:
                addSquare(numShapes);
                break;
            case 3:
                addCircle(numShapes);
                break;
            case 4:
                printShapeArray(shapeArr, numShapes);
                break;
            default:
                cout << "Error! Invalid menu option.\n";
                exit(1);
        }
        
        cout << "Do you want to continue?\n"
        << "Press y for yes, n for no,\n"
        << "and then press return: ";
        cin >> ans;
    } while (ans == 'y' || ans == 'Y');
    
    return 0;
}

void printShapeArray(Shape* arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Name: " << arr[i]->getName() << "\nTotal Area: " << arr[i]->area() << endl;
    }
}

void addRectangle(int index)
{
    double length;
    double width;
    cout << "Please enter a length value for the rectangle: ";
    cin >> length;
    cout << "Please enter a width value for the rectangle: ";
    cin >> width;
    shapeArr[index] = new Rectangle(length, width);
    numShapes++;
}

void addSquare(int index)
{
    double side;
    cout << "Please enter a side value for the square: ";
    cin >> side;
    shapeArr[index] = new Square(side);
    numShapes++;
}

void addCircle(int index)
{
    double radius;
    cout << "Please enter a radius value for the circle: ";
    cin >> radius;
    shapeArr[index] = new Circle(radius);
    numShapes++;
}
