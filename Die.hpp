//  Suchir Vohra
//  Die.hpp
//  War Game
//  October 18th 2017

#ifndef Die_hpp
#define Die_hpp

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class Die
{
protected:
    int numSides;
    string dieType;
    
public:
    //default constructor
    Die();
    Die(int n);
    
    virtual int roll();
    string getDieType();
    int getNumSides();
    
    
};

#endif /* Die_hpp */
