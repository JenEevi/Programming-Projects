//Jennifer Guidotti
//CSCI 2421
//Homework 3
//September 12, 2016
//This program takes strings in from a file
//The strings are then search with a binary search function
//based upon the input of a user

#include <iostream>
#include <string>
#include <vector>
#include "Recursion.h"
#include "Recursion_Functions.h"

using namespace std;

int main()
{
    //creates a vector object
    vector<Recursion> animals1;
    
    //populate the vector - function call
    populateVec(animals1);
    
    string item;
    
    cout << "The list of animals in the file is: tiger, fish, bear, bird" << endl;
    cout << "Please enter whih of these to search for that will return its position within the vector: " << endl;
    cin >> item;
    
    int last = static_cast<int>(animals1.size());
    
    //binary search function call
    bSearch(animals1, 0, last, item);
    
    
    return 0;
}
