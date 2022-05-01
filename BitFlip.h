#ifndef BITFLIP_H
#define BITFLIP_H
#include <string>
#include "Mutator.h"

class BitFlip: public Mutator{
public:
    virtual Individual Mutate(Individual dna, int k);
};
#endif