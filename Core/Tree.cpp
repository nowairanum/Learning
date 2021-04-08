// A recursive C++ program to  
// calculate the size of the tree //
//#include <bits/stdc++.h>
#include "Tree.h"
using namespace std;

node* newNode(int data)
{
    node* Node = new node();
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
    return(Node);
}

int size(node* node)
{
    if (node == NULL)
        return 0;
    else
        return(size(node->left) + 1 + size(node->right));
}

void count_tree() {
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    int x = size(root);
    std::cout << std::endl << "Size of the tree is " << x;
}
