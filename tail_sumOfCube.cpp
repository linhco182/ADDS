#include <iostream>



int sumOfCube(int n, int sum){
    if(n<0){
        return -1;
    }
    if(n<2){
        return sum+1;
    }


    return sumOfCube(n-1,sum+n*n*n);
}

int sumOfCube(int n){
    if(n<0){
        return -1;
    }
    if(n<2){
        return 1;
    }


    return sumOfCube(n,0);
}
