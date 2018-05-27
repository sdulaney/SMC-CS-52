// File: Rectangle.cpp
// Stewart Dulaney
// 5/26/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 7
// Problem 1

#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle() : Shape("Rectangle"), length(0.0), width(0.0)
{
    
}

Rectangle::Rectangle(double l, double w) : Shape("Rectangle"), length(l), width(w)
{
    
}

Rectangle::~Rectangle()
{
    
}

double Rectangle::getLength()
{
    return this->length;
}

void Rectangle::setLength(double length)
{
    this->length = length;
}

double Rectangle::getWidth()
{
    return this->width;
}

void Rectangle::setWidth(double width)
{
    this->width = width;
}

double Rectangle::area()
{
    return length * width;
}
