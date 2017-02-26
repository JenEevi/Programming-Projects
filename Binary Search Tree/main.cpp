//Jennifer Guidotti
//CSCI 2421
//Homework 8
//October 29, 2016
//
//main.cpp

#include <iostream>
#include "BSTree.h"


int main() {
    
    BSTree* Tree = new BSTree(); //creates a new treet object
    
    Tree->addNode(300); //adds values into tree
    cout << "Adding 300" << endl;
    Tree->addNode(100); //adds values into tree
    cout << "Adding 100" << endl;
    Tree->addNode(200); //adds values into tree
    cout << "Adding 200" << endl;
    Tree->addNode(400); //adds values into tree
    cout << "Adding 400" << endl;
    cout << endl;
    
    cout << "Printing Preorder:" << endl;
    Tree->printPreorder(Tree->Root()); //prints the BST in preorder
    cout << endl << endl;
    
    cout << "Printing Inorder:" << endl;
    Tree->printInorder(Tree->Root()); //prints the BST in Inorder
     cout << endl << endl;
    
    cout << "Printing PostOrder:" << endl;
    Tree->printPostorder(Tree->Root()); //Prints the BST in Post Order
    cout << endl << endl;
    
    Tree->findNode(500, Tree->Root()); //Finds the node 500 (first argument)
    Tree->findNode(600, Tree->Root()); //Finds the node 600 (First argument)
    cout << endl;
    
    cout << "Min=" << Tree->min(Tree->Root())->Key() << endl; //Finds the min number enetered into the BST
    cout << "Max="<< Tree->max(Tree->Root())->Key() << endl << endl; //Finds the max number entered into the BST
    
    cout << "Successor to 300=" << Tree->successor(300, Tree->Root())->Key() << endl; //Finds the successor to 300
    cout << "Predecessor to 300=" << Tree->predecessor(300, Tree->Root())->Key() << endl << endl; //Finds the predecessor to 300
    
    cout << "Deleting 300" << endl << endl;
    Tree ->deleteNode(Tree->Root(), 300); //Deletes 300 from the BST
    
    cout << "Printing PostOrder:" << endl;
    Tree->printPostorder(Tree->Root()); //with 300 Deleted, this now prints the new post order
    cout << endl << endl;
    
    cout << "Deleting entire Tree Pointer" << endl;
    delete Tree; //deletes the entire tree object
    
    return 0;
}
