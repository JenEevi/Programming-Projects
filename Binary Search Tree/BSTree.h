//Jennifer Guidotti
//CSCI 2421
//Homework 8
//October 29, 2016
//
//BSTree.h
//Given to me

#ifndef BSTREE_
#define BSTREE_
#include <iostream>
using namespace std;
#include "Node.h"

// Binary Search Tree class
class BSTree {
    Node* root;
public:
    BSTree();
    ~BSTree();
    Node* Root() { return root; };
    void addNode(int key);
    Node* findNode(int key, Node* parent);
    void printPreorder(Node* node);
    void printInorder(Node* node);
    void printPostorder(Node* node);
    
    Node* deleteNode(Node* root, int key);
    Node* min(Node* node);
    Node* max(Node* node);
    Node* successor(int key, Node* parent);
    Node* predecessor(int key, Node* parent);
private:
    void addNode(int key, Node* leaf);
    void freeNode(Node* leaf);
};
#endif  //BST
