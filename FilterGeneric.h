#ifndef FILTERGENERIC_H
#define FILTERGENERIC_H
#include <vector>

class FilterGeneric{
public:
    std::vector<int> filter(std::vector<int> input);
private:
    virtual bool g(int integer)=0;
};
#endif