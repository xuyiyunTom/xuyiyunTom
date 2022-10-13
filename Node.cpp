#include "Node.h"


Node::Node():next(nullptr)
{
}

Node::Node(int num, Node* node):data(num),next(node)
{
}

int Node::getData()
{
    return data;
}
    
Node* Node::getNext()
{
    return next;
}
    
void Node::setData(int num)
{
    data = num;
}
    
void Node::setNext(Node* node)
{
    next = node;
}