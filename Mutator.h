#ifndef MUTATOR_H
#define MUTATOR_H
#include <string>
#include "Individual.h"

class Mutator{
private:
public:
    virtual Individual Mutate(Individual dna, int k)=0;
};
#endif