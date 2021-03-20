// executable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "static_library.h"
#include "Tree.h"
#include <any>
#include <complex>
#include <utility>

using namespace Asdaq_Nova;

int main()
{
    // Call functions from class Brain_Of_Program
    /*Brain_Of_Program brain_of_program = Brain_Of_Program();
    std::cout << brain_of_program << std::endl;
    brain_of_program();*/

    // Call function from class Tree
    node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    std::cout << "Size of the tree is " << size(root);
}

