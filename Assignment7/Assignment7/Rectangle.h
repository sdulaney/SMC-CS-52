// File: Rectangle.h
// Stewart Dulaney
// 5/22/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 7
// Problem 1

#ifndef Rectangle_h
#define Rectangle_h

#include "Shape.h"

class Rectangle : public Shape
{
private:
    double length;
    double width;
public:
    Rectangle(double l, double w);
    Rectangle();
    ~Rectangle();
    double getLength();
    void setLength(double length);
    double getWidth();
    void setWidth(double width);
    double area();
    // Returns the area of the rectangle.
};

#endif /* Rectangle_h */
