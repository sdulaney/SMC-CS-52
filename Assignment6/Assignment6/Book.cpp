// File: Book.cpp
// Stewart Dulaney
// 5/2/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 6
// Problem 1

#include "Book.h"

Book::Book()
{
    
}

Book::~Book()
{
    
}

int Book::getPageCount() const
{
    return this->pageCount;
}

void Book::setPageCount(int pageCount)
{
    this->pageCount = pageCount;
}
