// File: Movie.hpp
// Stewart Dulaney
// 5/2/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 6
// Problem 1

#ifndef Movie_hpp
#define Movie_hpp

#include "Item.hpp"

class Movie : public Item
{
private:
    double length;  // in hours
public:
    Movie();
    ~Movie();
    double getLength() const;
    void setLength(double length);
};

#endif /* Movie_hpp */
