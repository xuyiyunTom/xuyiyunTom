#pragma once

#include <string>

using namespace std;

class Individual{

private:
    std::string binStr;

public:
    Individual(int len);
    Individual(string s);
    string getString();
    int getBit(int pos);
    void flipBit(int pos);
    int getMaxOnes();
    int getLength();
};