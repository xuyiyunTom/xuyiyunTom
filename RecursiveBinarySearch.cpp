#include "RecursiveBinarySearch.h"


bool RecursiveBinarySearch::search(vector<int> list, int value)
{
    int size = list.size();
    return search_recursion(&list, 0, size - 1, value);
}


bool RecursiveBinarySearch::search_recursion(vector<int>* list, int left, int right, int value){
    if(right <= left)
    {
        if(list->at(left) == value)
            return true;
        else
            return false;
    }
    int half = left + (right - left) / 2;
    if(list->at(half) > value)
        return search_recursion(list, left, half - 1, value);
    else if(list->at(half) == value)
        return true;
    else
        return search_recursion(list, half + 1, right, value);
}