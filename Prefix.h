#pragma once
#include <string>

using namespace std;


class Node{
public:
    string data;
    struct Node* left;
    struct Node* right;
};

class Prefix
{

public:
    Prefix(string str);
    ~Prefix();
    Node* CreateNewNode(string data);
    void freeTree(Node* p);
    bool isValid();
    int calculate();
    string getInfix();

private:
    Node* tree;
    bool bValid;
    int calculateKernel(Node* node);
    string getInfixKernel(Node* node);
};