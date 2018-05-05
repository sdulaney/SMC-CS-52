// File: Book.h
// Stewart Dulaney
// 5/2/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 6
// Problem 1

#ifndef Book_h
#define Book_h

#include "Item.h"

class Book : public Item
{
private:
    int pageCount;
public:
    Book();
    ~Book();
    int getPageCount() const;
    void setPageCount(int pageCount);
};

#endif /* Book_h */
