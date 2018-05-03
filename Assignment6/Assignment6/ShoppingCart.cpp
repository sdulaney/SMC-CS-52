// File: ShoppingCart.cpp
// Stewart Dulaney
// 5/2/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 6
// Problem 1

#include <iostream>
#include "ShoppingCart.hpp"

ShoppingCart::ShoppingCart()
{
    
}

ShoppingCart::~ShoppingCart()
{
    
}

void ShoppingCart::addToCart(Item i, int index)
{
    this->cartContents[index] = i;
    numItems++;
}

void ShoppingCart::printCartContents()
{
    for (int i = 0; i < numItems; i++)
    {
        cout << "Title: " << cartContents[i].getTitle() << endl;
        cout << "Description: " << cartContents[i].getDescription() << endl;
        cout << "Price: $" << cartContents[i].getPrice() << endl;
    }
}
