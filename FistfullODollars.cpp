#include "Computer.h"
#include "FistfullODollars.h"
#include <iostream>
#include "stdio.h"


FistfullODollars::FistfullODollars(){
    count = 0;
}

char FistfullODollars::makeMove(){
    char returnedMove=moves[count];
    

    if (count < 2){
        count++;
    }
    else{
        count = 0;
    }

    return returnedMove;
}

void FistfullODollars::reset(){
    count=0;
    return;
}