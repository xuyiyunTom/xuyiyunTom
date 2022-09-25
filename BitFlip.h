#pragma once
#include "Mutator.h"

class BitFlip : public Mutator{

public:
    virtual ~BitFlip();
    virtual Individual mutate(Individual src, int k);
};