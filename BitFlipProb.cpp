#include "BitFlipProb.h"
#include <random>
#include <time.h>


BitFlipProb::BitFlipProb(double dbValue):prob(dbValue){
   
}

BitFlipProb::~BitFlipProb(){

}

Individual BitFlipProb::mutate(Individual src, int k){
    std::default_random_engine seed(time(NULL));  
    std::uniform_real_distribution<double> gen(0.0, 1.0);  
    int length = src.getLength();
    for(int i = 0; i < length; i++){
        if(gen(seed) <= prob)
            src.flipBit(i);
    }
    return src;
}