// File: Customer.h
// Stewart Dulaney
// 5/2/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 6
// Problem 1

#ifndef Customer_h
#define Customer_h

#include "ShoppingCart.h"

class Customer
{
private:
    int id;
    string firstName;
    string lastName;
    ShoppingCart* ptrCart;
public:
    Customer();
    ~Customer();
    int getId() const;
    void setId(int id);
    string getFirstName() const;
    void setFirstName(string firstName);
    string getLastName() const;
    void setLastName(string lastName);
    ShoppingCart* getPtrCart() const;
    void setPtrCart(ShoppingCart* ptrCart);
};

#endif /* Customer_h */
