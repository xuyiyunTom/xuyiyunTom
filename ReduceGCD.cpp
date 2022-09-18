#include "ReduceGCD.h"


int ReduceGCD::binaryOpeator(int num1, int num2){
    if (num2 > 0){
        return binaryOpeator(num2, num1 % num2);
    }					
    else{
        return num1;
    }			
}