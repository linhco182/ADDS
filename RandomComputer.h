#ifndef RANDOMCOMPUTER
#define RANDOMCOMPUTER

#include "Computer.h"
#include <iostream>


class RandomComputer : public Computer{
public:
    virtual char makeMove();

};

#endif
