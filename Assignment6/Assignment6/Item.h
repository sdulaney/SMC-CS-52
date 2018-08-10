// File: Item.h
// Stewart Dulaney
// 5/2/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 6
// Problem 1

#ifndef Item_h
#define Item_h

#include <string>

using namespace std;

class Item
{
private:
    string title;
    string description;
    double price;
public:
    Item();
    ~Item();
    string getTitle() const;
    void setTitle(string title);
    string getDescription() const;
    void setDescription(string description);
    double getPrice() const;
    void setPrice(double price);
};

#endif /* Item_h */
