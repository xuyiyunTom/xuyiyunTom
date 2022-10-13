#include "LinkedList.h"
#include <string>
#include <iostream>

using namespace std;

bool isCommand(string str);
void runCommand(string str, LinkedList& list);

int main(){
    int list[100], curLen = 0;
    string str;
    while(true){
        cin>>str;
        if(isCommand(str))
        {
            LinkedList linklist(list, curLen);
            runCommand(str, linklist);
            break;
        }
        else
            list[curLen++] = atoi(str.c_str());
    }
    return 0;
}

bool isCommand(string str)
{
    if(str == "AF" || str == "AE" || str == "AP" || 
       str == "S"  || str == "DF" || str == "DE" || 
       str == "DP" || str == "GI")
        return true;
    else
        return false;
}

void runCommand(string str, LinkedList& list)
{
    int num1, num2;
    cin>>num1>>num2;
    if(str == "AF")
        list.addFront(num1);
    else if(str == "AE")
        list.addEnd(num1);
    else if(str == "AP")
        list.addAtPosition(num1, num2);
    else if(str == "S")
        list.search(num1);
    else if(str == "DF")
        list.deleteFront();
    else if(str == "DE")
        list.deleteEnd();
    else if(str == "DP")
        list.deletePosition(num1);
    else if(str == "GI")
        list.getItem(num1);
    list.printItems();
}