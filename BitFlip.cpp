#include <string>
#include "BitFlip.h"
#include <iostream>


Individual BitFlip::Mutate(Individual dna, int k){
    k=k-1;
    int pos = k % dna.getLength();
    Individual mutatedDna = dna;
    mutatedDna.flipBit(pos);

    return mutatedDna;
    
}