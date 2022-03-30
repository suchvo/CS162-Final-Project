//  Suchir Vohra
//  Game.hpp
//  War Game
//  October 18th 2017

#ifndef Game_hpp
#define Game_hpp

#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Die.hpp"
#include "LoadedDie.hpp"

using std::cout;
using std::cin;
using std::endl;

class Game
{
private:
    //store dice for players
    Die *d1, *d2;
    
    //array that holds result of each round. 2 players 100 rounds max
    int rounds[100][2];
    int numRounds;
    
public:
    Game();
    void printMenu();
    void input();
    void play();
    void results();
    
    
};





#endif
