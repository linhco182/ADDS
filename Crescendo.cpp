#include "Computer.h"
#include "Crescendo.h"
#include <iostream>
#include "stdio.h"


Crescendo::Crescendo(){
    count = 0;
}

char Crescendo::makeMove(){
    char returnedMove=moves[count];
    

    if (count < 2){
        count++;
    }
    else{
        count = 0;
    }

    return returnedMove;
}

void Crescendo::reset(){
    count=0;
    return;
}