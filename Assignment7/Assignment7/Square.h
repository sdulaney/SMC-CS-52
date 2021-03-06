// File: Square.h
// Stewart Dulaney
// 5/29/2018
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
    Square();
    Square(double s);
    ~Square();
    double getSide() const;
    void setSide(double side);
    double area() const;
    // Returns the area of the square.
};

#endif /* Square_h */
