#ifndef REARRANGE_H
#define REARRANGE_H
#include "Mutator.h"
#include <string>

class Rearrange: public Mutator{
public:
    virtual Individual Mutate(Individual dna, int k);
};
#endif