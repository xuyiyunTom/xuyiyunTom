#include "LinkedList.h"
#include <iostream>
#include <limits>

using namespace std;


LinkedList::LinkedList():head(nullptr)
{    
}

LinkedList::LinkedList(int nums[], int length)
{
    head = nullptr;
    for(int i = 0; i < length; i++)
        addEnd(nums[i]);
}

LinkedList::~LinkedList()
{
    while(head)
    {
        Node* delNode = head;
        head = head->getNext();
        delete delNode;
    }
}

void LinkedList::addFront(int newItem)
{
    head = new Node(newItem, head);
}

void LinkedList::addEnd(int newItem)
{
    int length = getItemsCount();
    if(length == 0)
        addFront(newItem);
    else
    {
        Node* node = findItemByPosition(length);
        node->setNext(new Node(newItem));
    }
}

void LinkedList::addAtPosition(int position, int newItem)
{
    int length = getItemsCount();
    if(position < 1)
        addFront(newItem);
    else if(position > length)
        addEnd(newItem);
    else
    {
        Node* node = findItemByPosition(position - 1);
        node->setNext(new Node(newItem, node->getNext()));
    }
}

int LinkedList::search(int item)
{
    Node* node = head;
    int pos = 1;
    while(node != nullptr)
    {
        if(node->getData() == item)
        {
            cout<<pos<<" ";
            return pos;
        }
        node = node->getNext();
        pos++;
    }
    cout<<"0 ";
    return 0;
}

void LinkedList::deleteFront()
{
    Node* node = findItemByPosition(1);
    if(node != nullptr)
    {
        head = node->getNext();
        delete node;
    }
}

void LinkedList::deleteEnd()
{
    int length = getItemsCount();
    if(length <= 0)
        return;
    if(length == 1)
        deleteFront();
    else
    {
        Node* node = findItemByPosition(length - 1);
        delete node->getNext();
        node->setNext(nullptr);
    }
}

void LinkedList::deletePosition(int position)
{
    int length = getItemsCount();
    if(position < 1 || position > length)
        cout<<"outside range"<<endl;
    else if(position == 1)
        deleteFront();
    else
    {
        Node* node = findItemByPosition(position - 1);
        Node* temp = node->getNext();
        node->setNext(temp->getNext());
        delete temp;
    }
}

int LinkedList::getItem(int position)
{
    int length = getItemsCount();
    if(position < 1 || position > length)
    {
        std::cout<<std::numeric_limits<int>::max()<<" ";
        return std::numeric_limits<int>::max();
    }
    else{
        Node* node = findItemByPosition(position);
        std::cout<<node->getData()<<" ";
        return node->getData();
    }
}

void LinkedList::printItems()
{
    Node* node = head;
    while(node != nullptr){
        cout<<node->getData();
        if(node->getNext() != nullptr)
            cout<<" ";
        else
            cout<<std::endl;
        node = node->getNext();
    }
}

int LinkedList::getItemsCount()
{
    int count = 0;
    Node* node = head;
    while(node != nullptr)
    {
        count++;
        node = node->getNext();
    }
    return count;
}

Node* LinkedList::findItemByPosition(int position)
{
    int pos = 1;
    Node* node = head;
    while(node != nullptr)
    {
        if(pos == position)
            break;
        pos++;
        node = node->getNext();
    }
    return node;
}

Node* LinkedList::findItemByItem(int item)
{
    Node* node = head;
    while(node != nullptr && node->getData() != item)
        node = node->getNext();
    return node;
}