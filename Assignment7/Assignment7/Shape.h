// File: Shape.h
// Stewart Dulaney
// 5/22/2018
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
    string getName();
    void setName(string name);
    virtual double area();
    // Returns the double value 0.0.
};

#endif /* Shape_h */
