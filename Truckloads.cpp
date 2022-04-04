#include "Truckloads.h"
#include <iostream>

Truckloads::Truckloads(){
    trucks=0;
}

int Truckloads::numTrucks(int numCrates, int loadSize){

    int trucks=0;
    if (numCrates<loadSize+1){
        trucks=trucks+1;
        return trucks;
    }
    else{
        if (numCrates % 2==0){
            int pile1 = numCrates/2;
            trucks = numTrucks(pile1,loadSize)+trucks;
            int pile2 = numCrates/2;
            trucks=numTrucks(pile2,loadSize)+trucks;
            std::cout<<"Trucks: ";
            return trucks;
        }else{
            int pile1=numCrates/2;
            trucks = numTrucks(pile1,loadSize)+trucks;
            int pile2=numCrates/2+1;
            trucks = numTrucks(pile2,loadSize)+trucks;

            return trucks;
        }
        
    }
}