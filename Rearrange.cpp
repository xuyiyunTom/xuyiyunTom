#include "Rearrange.h"


Rearrange::~Rearrange(){
}

Individual Rearrange::mutate(Individual src, int k){
    int len = src.getLength();
    Individual des(len);
	int j = (k - 1) % len;
    int g = 0;
    for(int i = j; i < len; i++){
        int value = src.getBit(i);
        if(value == 1){
            des.flipBit(g);
        }
        g++;
    }
    for(int i = 0; i < j; i++){
        int value = src.getBit(i);
        if(value == 1){
            des.flipBit(g);
        }
        g++;
    }
    return des;
}