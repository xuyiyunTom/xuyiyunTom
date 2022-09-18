#pragma once

#include <vector>

using namespace std;

class MapGeneric{

public:
    vector<int> map(vector<int>);

private:
    virtual int f(int) = 0;
};