// File: Square.cpp
// Stewart Dulaney
// 5/29/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 7
// Problem 1

#include <iostream>
#include "Square.h"

using namespace std;

Square::Square() : Shape("Square"), side(0.0)
{
    
}

Square::Square(double s) : Shape("Square"), side(s)
{
    
}

Square::~Square()
{
    
}

double Square::getSide() const
{
    return this->side;
}

void Square::setSide(double side)
{
    this->side = side;
}

double Square::area() const
{
    return side * side;
}
