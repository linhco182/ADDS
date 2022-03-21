#include "Computer.h"
#include "RandomComputer.h"
#include <iostream>
#include "stdio.h"


char RandomComputer::makeMove(){
    srand(time(0));
    int selectionNumber = rand()%3;
    char selection[4]={'R','P','S'};

    return selection[selectionNumber];
};