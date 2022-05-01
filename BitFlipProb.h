#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H
#include <string>
#include "Mutator.h"

class BitFlipProb: public Mutator{
private:
    double prob;
public:
    BitFlipProb(double p);
    virtual Individual Mutate(Individual dna, int k);
};
#endif