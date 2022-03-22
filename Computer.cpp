#include"Computer.h"
#include<iostream>

Computer::Computer(){}

char Computer::makeMove(){
    char move = 'R';
    return move;
}

void Computer::reset(){
    count=0;
    return;
}


Computer::~Computer(){}
