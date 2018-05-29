// File: Shape.h
// Stewart Dulaney
// 5/26/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 7
// Problem 1

#ifndef Shape_h
#define Shape_h

#include <string>

using namespace std;

class Shape
{
private:
    string name;
public:
    Shape();
    Shape(string name);
    ~Shape();
    string getName() const;
    void setName(string name);
    virtual double area() const;
    // Returns the double value 0.0.
};

#endif /* Shape_h */
