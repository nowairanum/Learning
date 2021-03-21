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

/* Computes the number of nodes in a tree. */
int size(node* node)
{
    if (node == NULL)
        return 0;
    else
        return(size(node->left) + 1 + size(node->right));
}

