#include "FilterGeneric.h"


vector<int> FilterGeneric::filter(vector<int> input){
    vector<int> output;
    for(vector<int>::iterator iter = input.begin(); iter != input.end(); iter++){
        if(g(*iter)){
            output.push_back(*iter);
        }
    }
    return output;
}