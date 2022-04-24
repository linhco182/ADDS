#ifndef REDUCEGENERIC_H
#define REDUCEGENERIC_H
#include <vector>

class ReduceGeneric{
public: 
    int reduce(std::vector<int> input);
private:
    virtual int binaryOperations(int int1, int int2)=0;
};
#endif
