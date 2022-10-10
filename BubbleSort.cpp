#include "BubbleSort.h"


vector<int> BubbleSort::sort(vector<int> list)
{
    int size = list.size();
    for(int i = 0; i < size - 1; i++)
    {
        for(int j = 0; j < size - 1 - i; j++)
        {
            if(list[j] > list[j+1])
            {
                int t = list[j];
                list[j] = list[j+1];
                list[j+1] = t;
            }
        }
    }
    return list;
}