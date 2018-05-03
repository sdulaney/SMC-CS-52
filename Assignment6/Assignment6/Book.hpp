// File: Book.hpp
// Stewart Dulaney
// 5/2/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 6
// Problem 1

#ifndef Book_hpp
#define Book_hpp

#include "Item.hpp"

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

#endif /* Book_hpp */
