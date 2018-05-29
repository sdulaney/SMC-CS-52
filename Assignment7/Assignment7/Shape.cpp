// File: Shape.cpp
// Stewart Dulaney
// 5/26/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 7
// Problem 1

#include "Shape.h"

Shape::Shape()
{
    this->name = "";
}

Shape::Shape(string name)
{
    this->name = name;
}

Shape::~Shape()
{
    
}

string Shape::getName() const
{
    return this->name;
}

void Shape::setName(string name)
{
    this->name = name;
}

double Shape::area() const
{
    return 0.0;
}
