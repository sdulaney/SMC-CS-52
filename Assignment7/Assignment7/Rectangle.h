// File: Rectangle.h
// Stewart Dulaney
// 5/29/2018
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
    Rectangle();
    Rectangle(double l, double w);
    ~Rectangle();
    double getLength() const;
    void setLength(double length);
    double getWidth() const;
    void setWidth(double width);
    double area() const;
    // Returns the area of the rectangle.
};

#endif /* Rectangle_h */
