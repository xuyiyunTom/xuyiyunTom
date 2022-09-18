#include "MapTriple.h"
#include "MapAbsoluteValue.h"
#include "ReduceMinimum.h"
#include "ReduceGCD.h"
#include "FilterForTwoDigitPositive.h"
#include "FilterOdd.h"
#include <iostream>
#include <vector>

using namespace std;

int main(){

    int num;
    char comma;
    vector<int> input;
    for(int i = 0; i < 20; i++){
        if(i < 19){
            cin>>num>>comma;
        }
        else{
            cin>>num;
        }
        input.push_back(num);
    }

    MapTriple map1;
    input = map1.map(input);

    MapAbsoluteValue map2;
    input = map2.map(input);

    FilterForTwoDigitPositive filter1;
    input = filter1.filter(input);

    FilterOdd filter2;
    input = filter2.filter(input);

    ReduceMinimum reduce1;
    int min_num = reduce1.reduce(input);

    ReduceGCD reduce2;
    int gcd_num = reduce2.reduce(input);

    std::cout<<min_num<<" "<<gcd_num<<std::endl;
    return 0;
}