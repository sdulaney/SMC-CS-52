// File: Customer.cpp
// Stewart Dulaney
// 5/2/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 6
// Problem 1

#include "Customer.hpp"

Customer::Customer()
{
    
}

Customer::~Customer()
{
    
}

int Customer::getId() const
{
    return this->id;
}

void Customer::setId(int id)
{
    this->id = id;
}

string Customer::getFirstName() const
{
    return this->firstName;
}

void Customer::setFirstName(string firstName)
{
    this->firstName = firstName;
}

string Customer::getLastName() const
{
    return this->lastName;
}

void Customer::setLastName(string lastName)
{
    this->lastName = lastName;
}

ShoppingCart* Customer::getPtrCart() const
{
    return this->ptrCart;
}

void Customer::setPtrCart(ShoppingCart* ptrCart)
{
    this->ptrCart = ptrCart;
}
