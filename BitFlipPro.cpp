#include "BitFlipPro.h"
#include <random>
#include <time.h>


BitFlipPro::BitFlipPro(double value){
    p = value;
}


Individual BitFlipPro::mutate(Individual individual, int k){
    std::default_random_engine random(time(NULL));  
    std::uniform_real_distribution<double> dis(0.0, 1.0);  
    int length = individual.getLength();
    for(int i = 0; i < length; i++){
        double q = dis(random);
        if(q <= p){
            individual.flipBit(i);
        }
    }
    return individual;
}