// File: Circle.cpp
// Stewart Dulaney
// 5/22/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 7
// Problem 1

#include <iostream>
#include "Circle.h"

using namespace std;

const double PI = 3.14159;

Circle::Circle(double r) : radius(r)
{
    
}

Circle::Circle() : radius(0.0)
{
    
}

Circle::~Circle()
{
    
}

double Circle::getRadius()
{
    return this->radius;
}

void Circle::setRadius(double radius)
{
    this->radius = radius;
}

double Circle::area()
{
    return PI * radius * radius;
}

void Circle::print()
{
    cout << "Name: Circle\n" << "Total Area: " << this->area() << endl;
}
