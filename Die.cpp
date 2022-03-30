//  Suchir Vohra
//  Die.cpp
//  War Game
//  October 18th 2017

#include "Die.hpp"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;


Die::Die() {}

Die::Die(int n){
    numSides = n;
    dieType = "Not loaded"; //default not loaded
}

int Die::getNumSides() {
    return numSides;
}

string Die::getDieType()
{
    return dieType;
}

int Die::roll()
{
    //returns a random number in the range 1 - numSides
    return rand() % numSides + 1;
}

