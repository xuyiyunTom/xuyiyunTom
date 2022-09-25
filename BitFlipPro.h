#ifndef _BIT_FLIP_PRO_H
#define _BIT_FLIP_PRO_H

#include "Mutator.h"

class BitFlipPro : public Mutator{

private:
    double p;

public:
    BitFlipPro(double value);
    virtual Individual mutate(Individual individual, int k);
};

#endif