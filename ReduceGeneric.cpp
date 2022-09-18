#include "ReduceGeneric.h"


int ReduceGeneric::reduce(std::vector<int> arr){
    int sum = arr[0];
    for(std::vector<int>::iterator it = arr.begin() + 1; it != arr.end(); it++){
        sum = binaryOpeator(sum, *it);
    }
    return sum;
}