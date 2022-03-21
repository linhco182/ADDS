#include "Tournament.h"
#include "Referee.h"
#include "Player.h"

Tournament::Tournament(){}

Player * Tournament::run(std::array<Player*, 8> competitors){
    Referee ref=Referee();
    char status;
    char oneStatus;
    int tally1;
    int tally2;
    std::array<Player*, 4> competitors1;
    //first round
    for (int i = 0; i < 4; i++){
        tally1=0;
        tally2=0;
        for (int k = 0; k < 5; k++){
            oneStatus=ref.refGame(competitors[2*i],competitors[2*i+1]);
            if(oneStatus=='W'){
                tally1++;
            }else if(oneStatus=='L'){
                tally2++;
            }
        }
        if(tally1>tally2){
            status='W';
        }else if(tally2>tally1){
            status='L';
        }else{
            status='T';
        }
        
        if (status=='W'){
            competitors1[i]=competitors[2*i];
        }else if(status=='L'){
            competitors1[i]=competitors[2*i+1];
        }else{
            competitors1[i]=competitors[2*i];
        }
        competitors1[i]->reset();
        

    }
    //second round
    std::array<Player*, 2> competitors2;
    
    for (int i = 0; i < 2; i++){
        tally1=0;
        tally2=0;
        for (int k = 0; k < 5; k++){
            oneStatus=ref.refGame(competitors2[2*i],competitors2[2*i+1]);
            if(oneStatus=='W'){
                tally1++;
            }else if(oneStatus=='L'){
                tally2++;
            }
        }
        if(tally1>tally2){
            status='W';
        }else if(tally2>tally1){
            status='L';
        }else{
            status='T';
        }
        
        if(status=='W'){
            competitors2[i]=competitors1[2*i];
        }else if(status=='L'){
            competitors2[i]=competitors1[2*i+1];
        }else{
            competitors2[i]=competitors1[2*i];
        }
        competitors2[i]->reset();
    }
    Player* winner;
    //third round
    tally1=0;
    tally2=0;
        for (int k = 0; k < 5; k++){
            oneStatus=ref.refGame(competitors2[0],competitors2[1]);
            if(oneStatus=='W'){
                tally1++;
            }else if(oneStatus=='L'){
                tally2++;
            }
        }
        if(tally1>tally2){
            status='W';
        }else if(tally2>tally1){
            status='L';
        }else{
            status='T';
        }
    if(status=='W'){
        winner=competitors2[0];
    }else if(status=='L'){
        winner=competitors2[1];
    }else{
        winner=competitors2[0];
    }
    return winner;
}

