#pragma once
#include "Mutator.h"

class BitFlipProb : public Mutator{

private:
    double prob;

public:
    BitFlipProb(double dbVal);
    virtual ~BitFlipProb();
    virtual Individual mutate(Individual src, int k);
};