//  Suchir Vohra
//  Game.cpp
//  War Game
//  October 18th 2017

#include "Game.hpp"
#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <ctime>


using std::cout;
using std::cin;
using std::endl;
using std::string;

Game::Game() {
    d1 = d2 = NULL;
}

void Game::printMenu() {
    char answer;
    bool checkAnswer = true;
    while(checkAnswer == true){
        cout<<"Would you like to start the War Game? (Y/N)"<<endl;
        cin>>answer;
        if(answer == 'Y' || answer == 'y'){
            cout<<"Welcome to the War Game. Let's get started..."<<endl;
            checkAnswer = false;
        } else if( answer == 'N' || answer == 'n'){
            cout<<"You have opted to quit the War Game"<<endl;
            checkAnswer = false;
            exit(0);
        } else{
            cout<<"Please use Y or N as your answers."<<endl;
        }
    }
}
void Game::input() {
    string response;
    int faces;
    
    srand(time(0));
    bool inputVal = true;
    while(inputVal == true) {
        cout << "How many rounds in the game? The max number of rounds is 100"<<endl;
        cin>>numRounds;
        if(numRounds < 100 && numRounds > 1) {
            inputVal = false;
        } else {
            cout<<"Please enter a number of rounds between 1 and 100"<<endl;
        }

    }

        cout<<"How many faces for the die of Player 1? ";
    cin>>faces;
    cout<<"Use loaded die for Player 1 (yes/no) ? " ;
    cin>>response;

    if(response.compare("yes")==0)
        d1 = new LoadedDie(faces);
    else
        d1 = new Die(faces);
    
    cout<<"How many faces for the die of Player 2? ";
    cin>>faces;
    cout<<"Use loaded die for Player 2 (yes/no) ? " ;
    cin>>response;
    
    if(response.compare("yes")==0)
        d2=new LoadedDie(faces);
    else
        d2=new Die(faces);
}

void Game::play() {
    for(int i = 0; i<numRounds;i++) {
        rounds[i][0] = d1 -> roll(); //player1
        rounds[i][0] = d2 -> roll(); //player2
    }
    
}

void Game::results() {
    int points1 = 0, points2 = 0;
    
    cout<<"Number of rounds played: "<<numRounds<<endl;
    cout<<"Player 1 uses "<<d1->getDieType() << " die with "<<d1->getNumSides()<<" faces." <<endl;
    cout<<"Player 2 uses "<<d2->getDieType() << " die with "<<d2->getNumSides()<<" faces."<<endl;
    
    cout<<"Player 1 \t Player 2 \t "<<endl;
    
    for(int i=0;i<numRounds;i++) {
        
        cout<<rounds[i][0]<<"\t\t\t"<<rounds[i][1]<<endl;
        
        if(rounds[i][0]>rounds[i][1])
            points1++;
        else if(rounds[i][0]<rounds[i][1])
            points2++;
    }
    
    cout<<"Player 1 wins "<<points1<<" times."<<endl;
    cout<<"Player 2 wins "<<points2<<" times."<<endl;
    
    if(points1>points2)
        cout<<"Player 1 wins !";
    else if (points2>points1)
        cout<<"Player 2 wins !";
    else
        cout<<"Its a draw !!";
    
    delete d1;
    delete d2;
}


    
    
    
