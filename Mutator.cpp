#include "Mutator.h"

Mutator::~Mutator(){

}

Individual Mutator::mutate(Individual individual, int k){
    individual.flipBit(k - 1);
    return individual;
}