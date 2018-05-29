// File: Circle.cpp
// Stewart Dulaney
// 5/29/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 7
// Problem 1

#include <iostream>
#include "Circle.h"

using namespace std;

const double PI = 3.14159;

Circle::Circle() : Shape("Circle"), radius(0.0)
{
    
}

Circle::Circle(double r) : Shape("Circle"), radius(r)
{
    
}

Circle::~Circle()
{
    
}

double Circle::getRadius() const
{
    return this->radius;
}

void Circle::setRadius(double radius)
{
    this->radius = radius;
}

double Circle::area() const
{
    return PI * radius * radius;
}
