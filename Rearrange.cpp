#include "Rearrange.h"
#include <string>

Individual Rearrange::Mutate(Individual dna, int k){
    k=k-1;
    std::string binaryOld = dna.getString();
    std::string binaryNew;
    for (int i = 0; i < dna.getLength(); i++){
        int pos = (k+i)%dna.getLength();
        binaryNew.push_back(binaryOld.at(pos));
    }

    Individual mutatedDna = Individual(binaryNew);
    return mutatedDna;
}