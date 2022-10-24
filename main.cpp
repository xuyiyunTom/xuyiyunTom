#include <iostream>
#include "Prefix.h"

using namespace std;

int main(){
    string str;
    getline(cin, str);
    Prefix obj(str);
    if(obj.isValid()){
        std::cout<<obj.getInfix()<<" = "<<obj.calculate()<<std::endl;
    }
    else{
        std::cout<<"Error"<<std::endl;
    }
    return 0;
}