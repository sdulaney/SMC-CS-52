// File: Problem1.cpp
// Stewart Dulaney
// 5/2/2018
// CS 52 Section 4110
// SID: 1545566
// Assignment 6
// Problem 1
#include <iostream>
#include "Item.hpp"
#include "Book.hpp"
#include "Movie.hpp"
#include "CD.hpp"
#include "ShoppingCart.hpp"
#include "Customer.hpp"

using namespace std;

int main()
{
    Customer c1;
    c1.setPtrCart(new ShoppingCart);
    
    Item i1;
    i1.setTitle("Echo");
    i1.setDescription("Echo (2nd Gen) has a new speaker, new design, and is available in a range of styles including fabrics and wood veneers. Echo connects to Alexa to play music, make calls, set music alarms and timers, ask questions, control smart home devices, and more—instantly.");
    i1.setPrice(99.99);
    (*c1.getPtrCart()).addToCart(i1, 0);
    
    Book b1;
    b1.setTitle("The C Programming Language");
    b1.setDescription("The authors present the complete guide to ANSI standard C language programming. Written by the developers of C, this new version helps readers keep up with the finalized ANSI standard for C while showing how to take advantage of C's rich set of operators, economy of expression, improved control flow, and data structures. The 2/E has been completely rewritten with additional examples and problem sets to clarify the implementation of difficult language constructs. For years, C programmers have let K&R guide them to building well-structured and efficient programs. Now this same help is available to those working with ANSI compilers. Includes detailed coverage of the C language plus the official C language reference manual for at-a-glance help with syntax notation, declarations, ANSI changes, scope rules, and the list goes on and on.");
    b1.setPrice(35.64);
    b1.setPageCount(272);
    (*c1.getPtrCart()).addToCart(b1, 1);
    
    Movie m1;
    m1.setTitle("The Imitation Game");
    m1.setDescription("During World War II, the English mathematical genius Alan Turing tries to crack the German Enigma code with help from fellow mathematicians.");
    m1.setPrice(12.99);
    m1.setLength(1.883333333);
    (*c1.getPtrCart()).addToCart(m1, 2);
    
    CD cd1;
    cd1.setTitle("The Imitation Game (Original Motion Picture Soundtrack)");
    cd1.setDescription("The Imitation Game (Original Motion Picture Soundtrack) by Alexandre Desplat.");
    cd1.setPrice(9.83);
    cd1.setTrackCount(21);
    (*c1.getPtrCart()).addToCart(cd1, 3);
    
    (*c1.getPtrCart()).printCartContents();
    
    return 0;
}
