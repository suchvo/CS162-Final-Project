//  Suchir Vohra
//  LoadedDie.cpp
//  War Game
//  October 18th 2017

#include "LoadedDie.hpp"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

LoadedDie::LoadedDie(){};

LoadedDie::LoadedDie(int n) : Die(n)
{
    turn = 1;
    dieType = "Loaded";
}

/*Overriding the roll function to have a biased behaviour of returning the highest number for every alternate roll */
int LoadedDie::roll()
{
    //every odd turn return the numSides, (biased) and every even turn number usual roll from Die class.
    int val = turn == 1 ? numSides : Die::roll();
    turn=(turn+1)%2;
    return val;
}
