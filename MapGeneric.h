#ifndef MAPGENERIC_H
#define MAPGENERIC_H
#include <vector>

class MapGeneric{
public:
    std::vector<int> map(std::vector<int> input);
private:
    virtual int f(int integer) = 0;
};
#endif