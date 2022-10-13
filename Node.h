#pragma once

class Node
{

public:
    Node();
    Node(int num, Node* node = nullptr);
    int getData();
    Node* getNext();
    void setData(int num);
    void setNext(Node* node);

private:
    int data;
    Node* next;
};