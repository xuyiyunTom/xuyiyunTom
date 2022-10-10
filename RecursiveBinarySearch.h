#pragma once
#include <vector>

using namespace std;

class RecursiveBinarySearch{

public:
    bool search(vector<int> list, int);

private:
    bool search_recursion(vector<int>* list, int, int, int);
};