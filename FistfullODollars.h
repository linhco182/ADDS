#ifndef FISTFULLODOLLARS_H
#define FISTFULLODOLLARS_H

#include "Computer.h"

#include <array>


class FistfullODollars : public Computer{
public:
    FistfullODollars();
    virtual char makeMove();
    void reset();
private:
    int count;
    std::array <char,3> moves = {'R','P','P'};
    
};
#endif
