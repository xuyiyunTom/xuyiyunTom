#include "Prefix.h"
#include <stack>
#include <stdlib.h>

using namespace std;


Prefix::Prefix(string str){
    tree = nullptr;
    stack<Node*> nodeStack; 
    for(int i = str.size() - 1; i >= 0; i--){
        if(str[i] != ' '){
            string data;
            while(i >= 0 && str[i] != ' '){
                data = str[i] + data;
				i--;
            }
            Node* node = CreateNewNode(data);
            if(data == "+" || data == "-" || data == "*" || data == "/"){
                if(nodeStack.size() < 2){
                    bValid = false;
                    break;
                }
                node->left = nodeStack.top();
                nodeStack.pop();
                node->right = nodeStack.top();
                nodeStack.pop();
                if(data == "/" && atoi(node->right->data.c_str()) == 0){
                    bValid = false;
                    break;
                }
            }
            nodeStack.push(node);
        }
    }
    if(nodeStack.size() == 1){
        tree = nodeStack.top();
        bValid = true;
    }
    else{
        bValid = false;
    }
}

Prefix::~Prefix(){
    freeTree(tree);
}

Node* Prefix::CreateNewNode(string data){
    Node* node = new Node;
    node->data = data;
    node->left = nullptr;
    node->right = nullptr;
    return node;
}

void Prefix::freeTree(Node* p){
    while(p != nullptr){
        freeTree(p->left);
        freeTree(p->right);
        delete p;
    }
}

bool Prefix::isValid(){
    return bValid;
}

int Prefix::calculate(){
    return calculateKernel(tree);
}

int Prefix::calculateKernel(Node* node){
    if(node == nullptr){
        return 0;
    }
    if(node->left == nullptr && node->right == nullptr){
        return atoi(node->data.c_str());
    }
    int a = calculateKernel(node->left);
    int b = calculateKernel(node->right);
    if(node->data == "+"){
        return a + b;
    }
    else if(node->data == "-"){
        return a - b;
    }
    else if(node->data == "*"){
        return a * b;
    }
    else if(node->data == "/"){
        return a/b;
    }
    return 0;
}

string Prefix::getInfix(){
	return getInfixKernel(tree);
}

string Prefix::getInfixKernel(Node* node){
    if(node == nullptr){
        return "";
    }
	if (node->left != nullptr && node->right != nullptr) {
		string left = getInfixKernel(node->left);
		string right = getInfixKernel(node->right);
		if (node->data == "+" || node->data == "-") {
			return left + ' ' + node->data + ' ' + right;
		}
		else {
			if (left[0] != '(' && (left.find('+') != -1 || left.find('-') != -1)) {
				left = '(' + left + ')';
			}
			if (right[0] != '(' && (right.find('+') != -1 || right.find('-') != -1)) {
				right = '(' + right + ')';
			}
			return left + ' ' + node->data + ' ' + right;
		}
	}
	else {
		return node->data;
	}
}