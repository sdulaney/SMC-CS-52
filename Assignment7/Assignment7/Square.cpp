// File: Square.cpp
// Stewart Dulaney
// 5/22/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 7
// Problem 1

#include <iostream>
#include "Square.h"

using namespace std;

Square::Square(double s) : side(s)
{
    
}

Square::Square() : side(0.0)
{
    
}

Square::~Square()
{
    
}

double Square::getSide()
{
    return this->side;
}

void Square::setSide(double side)
{
    this->side = side;
}

double Square::area()
{
    return side * side;
}

void Square::print()
{
    cout << "Name: Square\n" << "Total Area: " << this->area() << endl;
}
