// File: Shape.h
// Stewart Dulaney
// 5/18/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 7
// Problem 1

#ifndef Shape_h
#define Shape_h

class Shape
{
public:
    Shape();
    ~Shape();
    virtual double area();
    // Returns the double value 0.0.
    virtual void print();
};

#endif /* Shape_h */
