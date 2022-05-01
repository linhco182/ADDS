#include "BitFlipProb.h"
#include <iostream>
#include <random>

BitFlipProb::BitFlipProb(double p){
    prob=p;
}

Individual BitFlipProb::Mutate(Individual dna, int k){
    Individual mutatedDna = dna;

    for (int i = 0; i < dna.getLength(); i++){
        double x = ((double)rand()/(double)RAND_MAX);
        if (x<=prob){
            mutatedDna.flipBit(i);

        }

    }

    return mutatedDna;
}