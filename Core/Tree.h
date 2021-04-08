#pragma once
#include<iostream>

class node
{
public:
    int data;
    node* left;
    node* right;
};

node* newNode(int data);

int size(node* node);

void count_tree();