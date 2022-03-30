//  Suchir Vohra
//  LoadedDie.hpp
//  War Game
//  October 18th 2017

#ifndef LoadedDie_hpp
#define LoadedDie_hpp

#include "Die.hpp"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>

using std::cout;
using std::cin;
using std::endl;
using std::string;

class LoadedDie : public Die
{
private:
    int turn;
    
public:
    LoadedDie();
    LoadedDie(int n);
    
    int roll();
};



#endif /* LoadedDie_hpp */
