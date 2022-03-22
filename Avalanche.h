#ifndef AVALANCHE_H
#define AVALANCHE_H

#include "Computer.h"
#include <iostream>


class Avalanche : public Computer{
public:
    char makeMove();
    void reset();
};

#endif
