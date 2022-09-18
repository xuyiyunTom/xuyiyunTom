#pragma once

#include <vector>

using namespace std;

class FilterGeneric{

public:
    vector<int> filter(vector<int>);

private:
    virtual bool g(int) = 0;

};