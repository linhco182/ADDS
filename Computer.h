#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"

class Computer: public Player{
    public:
        Computer();

        virtual char makeMove();

};
#endif

