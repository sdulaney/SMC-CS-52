// File: ShoppingCart.hpp
// Stewart Dulaney
// 5/2/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 6
// Problem 1

#ifndef ShoppingCart_hpp
#define ShoppingCart_hpp

#include "Item.hpp"

const int MAX_CART_SIZE = 50;

class ShoppingCart
{
private:
    Item cartContents[MAX_CART_SIZE];
    int numItems;
public:
    ShoppingCart();
    ~ShoppingCart();
    void addToCart(Item i, int index);
    // Precondition: i contains an Item object and index is a valid
    // index into the array cartContents.
    // Postcondition: the array element in cartContents at index equal
    // to index is now equal to i, and numItems has been incremented.
    void printCartContents();
    // Prints the items currently in the array cartContents to the
    // console.
};

#endif /* ShoppingCart_hpp */
