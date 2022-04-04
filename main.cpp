#include "EfficientTruckloads.h"
#include <iostream>

int main(){
    EfficientTruckloads revFunction=EfficientTruckloads();
    int crates;
    int load;
    std::cin>>crates;
    std::cin>>load;

    std::cout<<revFunction.numTrucks(crates,load)<<std::endl;



}
