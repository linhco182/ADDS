#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "Rearrange.h"


Individual* execute(Individual * indPtr, Mutator * mPtr, int k){
    static Individual newDNA = mPtr->Mutate(*indPtr,k);
    Individual * newAddress = (Individual*)malloc(sizeof(newDNA));



    return &newDNA;
}

int main(){

    Individual * bin1 =new Individual("011001010");

    Rearrange * mut1=new  Rearrange();

    Individual* bin2 = execute(bin1,mut1,5);

    std::cout<<"Test"<<bin2->getLength();


    return 0;
}

