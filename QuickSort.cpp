#include "QuickSort.h"


vector<int> QuickSort::sort(vector<int> list)
{
    int size = list.size();
    sort_recursion(&list, 0, size - 1);
    return list;
}


void QuickSort::sort_recursion(vector<int>* list, int left, int right)
{
    if(left >= right)
        return;
    int i = left, j = right, t = 0;
    int privot = left;
    /*if(right - left + 1 >= 3)
        privot = left + 2;*/
    while(true)
    {
        while(list->at(i) <= list->at(privot) && i < right)
            i++;
        while(list->at(j) >= list->at(privot) && j > left)
            j--;
        if(i >= j)
            break;
        t = list->at(i);
        list->at(i) = list->at(j);
        list->at(j) = t;
    }
    t = list->at(j);
    list->at(j) = list->at(privot);
    list->at(privot) = t;
    sort_recursion(list, left, j - 1);
    sort_recursion(list, j + 1, right);
}