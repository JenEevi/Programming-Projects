//Jennifer Guidotti
//CSCI 2421
//Homework 8
//October 29, 2016
//
//BSTree.cpp
//Find, PreOrder, InOrder, and PostOrder Functions were done by me

#include "BSTree.h"

// Constructor
BSTree::BSTree() {
    root = nullptr;
}

// Destructor
BSTree::~BSTree() {
    freeNode(root);
}

// Free the node
void BSTree::freeNode(Node* leaf)
{
    if ( leaf != NULL )
    {
        freeNode(leaf->Left());
        freeNode(leaf->Right());
        free(leaf);
    }
    
}

// Add a node
void BSTree::addNode(int key)
{
    // No elements. Add the root
    if ( root == nullptr ) {
        Node* n = new Node();
        n->setKey(key);
        root = n;
    }
    else {
        addNode(key, root);
    }
}

// Add a node (private)
void BSTree::addNode(int key, Node* leaf) {
    if ( key <= leaf->Key() )
    {
        if ( leaf->Left() != nullptr )
            addNode(key, leaf->Left());
        else {
            Node* n = new Node();
            n->setKey(key);
            n->setParent(leaf);
            leaf->setLeft(n);
        }
    }
    else
    {
        if ( leaf->Right() != nullptr )
            addNode(key, leaf->Right());
        else {
            Node* n = new Node();
            n->setKey(key);
            n->setParent(leaf);
            leaf->setRight(n);
        }
    }
}

//Function searches for the given node that is entered in
//If the node is not found, it will return not found
//if the node is found, it will return the node
Node* BSTree::findNode(int key, Node* node)
{
    if (node == nullptr){ //if node is not there or Null
        cout << "Node " << key << " not found" << endl;
        return NULL; //return null
    }
    
    if(node->Key() == key) //if the node is the root, then just return this value
        return node;
    
    if(node->Key() < key){ //
        return findNode(key, node->Right()); //go Right
    }
    else {
        return findNode(key, node->Left()); //Go left
    }
    
}

// Prints the BSTree in Preorder
//Go Root, then left, then right
void BSTree::printPreorder(Node* node)
{
    if(node){
        cout << node->Key() << " "; //Prints
        printPreorder(node->Left()); //Traversing left
        printPreorder(node->Right()); //Travsersing Right
    }
}
// Prints the BSTree inOrder
//Go left, root, then right
void BSTree::printInorder(Node* node)
{
    if(node){
        printInorder(node->Left()); //Travsersing Left
        cout << node->Key() << " "; //Prints
        printInorder(node->Right()); //Traversing Right
    }
}
// Prints the BSTree in PostOrder
//Go left, right, then root
void BSTree::printPostorder(Node* node)
{
    if(node){
        printPostorder(node->Left()); //Traversing Left
        printPostorder(node->Right()); //Traversing Right
        cout << node->Key() <<  " "; //Prints
    }
}

// Find the node with min key
// Traverse the left sub-BSTree recursively
// till left sub-BSTree is empty to get min
Node* BSTree::min(Node* node)
{
    Node* tempNode = node;
    if ( node == nullptr )
        tempNode = nullptr;
    else if ( node->Left() )
    {
        tempNode = min(node->Left());
    }
    else
        tempNode = node;
    
    return tempNode;
}

// Find the node with max key
// Traverse the right sub-BSTree recursively
// till right sub-BSTree is empty to get max
Node* BSTree::max(Node* node)
{
    Node * tempNode = node;
    if ( node == nullptr )
        tempNode = nullptr;
    else if ( node->Right() )
        tempNode = max(node->Right());
    else
        tempNode = node;
    
    return tempNode;
}

// Find successor to a node
// Find the node, get the node with max value
// for the right sub-BSTree to get the successor
Node* BSTree::successor(int key, Node *node)
{
    Node* thisKey = findNode(key, node);
    if ( thisKey )
        return max(thisKey->Right());
    
    return thisKey;
}

// Find predecessor to a node
// Find the node, get the node with max value
// for the left sub-BSTree to get the predecessor
Node* BSTree::predecessor(int key, Node *node)
{
    Node* thisKey = findNode(key, node);
    if ( thisKey )
        return max(thisKey->Left());
    return nullptr;
}

Node* BSTree::deleteNode(Node* root, int key)
{
    
    /* Given a binary search tree and a key, this function deletes the key
     and returns the new root */
    
    // base case
    if (root == nullptr)
        return root;
    
    // If the key to be deleted is smaller than the root's key,
    // then it lies in left subtree
    if (key < root->Key())
    {
        root->setLeft(deleteNode(root->Left(), key));
    }
    // If the key to be deleted is greater than the root's key,
    // then it lies in right subtree
    else if (key > root->Key())
        root->setRight(deleteNode(root->Right(), key));
    
    // if key is same as root's key, then This is the node
    // to be deleted
    else
    {
        // node with only one child or no child
        if (root->Left() == NULL)
        {
            Node *temp = root->Right();
            free(root);
            return temp;
        }
        else if (root->Right() == NULL)
        {
            Node *temp = root->Left();
            free(root);
            return temp;
        }
        
        // node with two children: Get the inorder successor (smallest
        // in the right subtree)
        Node* temp = min(root->Right());
        
        // Copy the inorder successor's content to this node
        root->setKey(temp->Key());
        
        // Delete the inorder successor
        root->setRight(deleteNode(root->Right(), temp->Key()));
    }
    return root;
    
}
