// File: CD.hpp
// Stewart Dulaney
// 5/2/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 6
// Problem 1

#ifndef CD_h
#define CD_h

#include "Item.h"

class CD : public Item
{
private:
    int trackCount;
public:
    CD();
    ~CD();
    int getTrackCount() const;
    void setTrackCount(int trackCount);
};

#endif /* CD_h */
