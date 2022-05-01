#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "BitFlipProb.h"

int main(){

    Individual bin1 = Individual(5);

    BitFlipProb mut1= BitFlipProb(0.6);

    Individual bin2 = mut1.Mutate(bin1, 1);

    std::cout<<bin1.getString()<<std::endl;
    std::cout<<bin2.getString();


    return 0;
}