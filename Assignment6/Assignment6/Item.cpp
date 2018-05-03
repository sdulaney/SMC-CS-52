// File: Item.cpp
// Stewart Dulaney
// 5/2/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 6
// Problem 1

#include "Item.hpp"

Item::Item()
{
    
}

Item::~Item()
{
    
}

string Item::getTitle() const
{
    return this->title;
}

void Item::setTitle(string title)
{
    this->title = title;
}

string Item::getDescription() const
{
    return this->description;
}

void Item::setDescription(string description)
{
    this->description = description;
}

double Item::getPrice() const
{
    return this->price;
}

void Item::setPrice(double price)
{
    this->price = price;
}
