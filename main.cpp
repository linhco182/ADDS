#include <iostream>
#include "Individual.h"
#include "Mutator.h"
#include "Rearrange.h"
#include "BitFlip.h"
#include <string>



Individual* execute(Individual * indPtr, Mutator * mPtr, int k){
    Individual * newAddress = new Individual;
    *newAddress= mPtr->Mutate(*indPtr,k);




    return newAddress;
}

int main(){

    std::string input = "000000 2 0111 2";
    // std::cin>>input;

    int pos=0;

    std::string binarystr1 = input.substr(0,input.find(" ",pos));

    pos = input.find(" ",pos)+1;

    std::string k1 = input.substr(pos,input.find(" ",pos)-pos);

    pos = input.find(" ",pos)+1;


    std::string binarystr2 = input.substr(pos,input.find(" ",pos)-pos);

    pos = input.find(" ",pos)+1;

    std::string k2 = input.substr(pos,input.find(" ",pos)-pos);

    Individual * bin1 =new Individual(binarystr1);

    Individual * bin2 = new Individual(binarystr2);

    BitFlip * mut1= new  BitFlip();

    Rearrange * mut2 = new Rearrange();

    Individual* bin3 = execute(bin1,mut1,stoi(k1));

    Individual* bin4 = execute(bin2,mut2,stoi(k2));

    std::cout<<bin3->getString()<<" "<<bin4->getString()<<" "<<bin4->getMaxOnes();





    return 0;
}

