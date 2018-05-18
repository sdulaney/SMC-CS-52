// File: Square.h
// Stewart Dulaney
// 5/18/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 7
// Problem 1

#ifndef Square_h
#define Square_h

#include "Shape.h"

class Square : public Shape
{
private:
    double side;
public:
    Square(double s);
    Square();
    ~Square();
    double getSide();
    void setSide(double side);
    double area();
    // Returns the area of the square.
    void print();
    // Prints the name and total area of the square to
    // the console.
};

#endif /* Square_h */
