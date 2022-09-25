#pragma once

#include "Mutator.h"

class Rearrange : public Mutator{

public:
    virtual ~Rearrange();
    virtual Individual mutate(Individual src, int k);
};