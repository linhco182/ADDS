#include "Human.h"

#include <iostream>

Human::Human(){}

char Human::makeMove(){
    char move;
    std::cout<<"Enter move: ";
    std::cin>>move;
    return move;
}

