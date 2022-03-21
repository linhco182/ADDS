#include "Computer.h"
#include "PaperDoll.h"
#include <iostream>
#include "stdio.h"


PaperDoll::PaperDoll(){
    count = 0;
}

char PaperDoll::makeMove(){
    char returnedMove=moves[count];
    

    if (count < 2){
        count++;
    }
    else{
        count = 0;
    }

    return returnedMove;
}

void PaperDoll::reset(){
    count=0;
    return;
}