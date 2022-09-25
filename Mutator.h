#pragma once

#include "Individual.h"

class Mutator{

public:
    virtual ~Mutator(){}
    virtual Individual mutate(Individual src, int k) = 0;
};