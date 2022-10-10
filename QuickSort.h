#pragma once

#include "Sort.h"

class QuickSort : public Sort{

public:
    virtual vector<int> sort(vector<int>);

private:
    void sort_recursion(vector<int>*, int, int);
};