#include <iostream>
#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

using namespace std;


int main()
{
    QuickSort sort;
    RecursiveBinarySearch search;
    vector<int> src_arr, sorted_arr;
    while(true)
    {
        int number;
        cin>>number;
        src_arr.push_back(number);
        if(cin.get() == '\n')
            break;
    }
    sorted_arr = sort.sort(src_arr);
    if(search.search(sorted_arr, 1))
        cout<<"true ";
    else
        cout<<"false ";
    int size = sorted_arr.size();
    for(int i = 0; i < size; i++)
    {
        cout << sorted_arr[i];
        if(i < size - 1)
            cout << " ";
    }
    cout << endl;
    return 0;
}