// File: Circle.h
// Stewart Dulaney
// 5/22/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 7
// Problem 1

#ifndef Circle_h
#define Circle_h

#include "Shape.h"

class Circle : public Shape
{
private:
    double radius;
public:
    Circle();
    Circle(double r);
    ~Circle();
    double getRadius();
    void setRadius(double radius);
    double area();
    // Returns the area of the circle.
};

#endif /* Circle_h */
