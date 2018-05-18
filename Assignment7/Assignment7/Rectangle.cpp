// File: Rectangle.cpp
// Stewart Dulaney
// 5/18/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 7
// Problem 1

#include <iostream>
#include "Rectangle.h"

using namespace std;

Rectangle::Rectangle(double l, double w) : length(l), width(w)
{
    
}

Rectangle::Rectangle() : length(0.0), width(0.0)
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

void Rectangle::print()
{
    cout << "Name: Rectangle\n" << "Total Area: " << this->area() << endl;
}
