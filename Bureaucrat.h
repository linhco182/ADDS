#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H

#include "Computer.h"
#include <iostream>


class Bureaucrat : public Computer{
public:
    char makeMove(); 
    void reset();

};

#endif
