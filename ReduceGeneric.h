#pragma once

#include <vector>

using namespace std;

class ReduceGeneric{

public:
    int reduce(vector<int>);

private:
    virtual int binaryOpeator(int, int) = 0;

};