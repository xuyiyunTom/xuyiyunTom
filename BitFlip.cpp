#include "BitFlip.h"


BitFlip::~BitFlip(){

}

Individual BitFlip::mutate(Individual src, int k){
	int index = (k - 1) % src.getLength();
    src.flipBit(index);
    return src;
}