#pragma once

#include "Node.h"

class LinkedList
{

public:
    LinkedList();
    LinkedList(int nums[], int length);
    ~LinkedList();
    void addFront(int newItem);
    void addEnd(int newItem);
    void addAtPosition(int position, int newItem);
    int search(int item);
    void deleteFront();
    void deleteEnd();
    void deletePosition(int position);
    int getItem(int position);
    void printItems();

private:
    Node* head;

    //helper function
    int getItemsCount();
    Node* findItemByPosition(int position);
    Node* findItemByItem(int item);
};