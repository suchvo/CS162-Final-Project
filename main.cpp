//  Suchir Vohra
//  main.cpp
//  War Game
//  October 18th 2017


#include <iostream>
#include "Game.hpp"

int main(int argc, const char * argv[]) {
Game game;
    
game.printMenu();
game.input();
game.play();
game.results();
    
}
