#include"Computer.h"
#include"Human.h"
#include"Player.h"
#include<iostream>
#include"Referee.h"
#include"Tournament.h"
#include"Avalanche.h"
#include"Bureaucrat.h"
#include"Crescendo.h"
#include"Toolbox.h"
#include"FistfullODollars.h"



int main(){
    Avalanche *player1;
    Bureaucrat *player2;
    Bureaucrat *player3;
    Toolbox *player4;
    Toolbox *player5;
    Crescendo *player6;
    Crescendo *player7;
    FistfullODollars *player8;

    player1=new Avalanche;
    player2=new Bureaucrat;
    player3=new Bureaucrat;
    player4=new Toolbox;
    player5=new Toolbox;
    player6=new Crescendo;
    player7=new Crescendo;
    player8=new FistfullODollars;

    Tournament tourney=Tournament();

    std::array<Player*, 8> myArray = {player1,player2,player3,player4,player5,player6,player7,player8};

    for (int i=0; i<8; i++){
        std::cout<<myArray[i]<<std::endl;
    }

    std::cout<<tourney.run(myArray)<<std::endl;
    
    return 0;
}