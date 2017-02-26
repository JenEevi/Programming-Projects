//Jennifer Guidotti
//CSCI 2421
//Homework 3
//September 12, 2016
//This program takes strings in from a file
//The strings are then search with a binary search function
//based upon the input of a user

#ifndef Recursion_Functions_h
#define Recursion_Functions_h

#include <iostream>
#include <string>
#include <fstream>
#include "Recursion.h"
#include <vector>
#include <algorithm>

using namespace std;

//Constructor Function for Recursion
Recursion::Recursion(string sAnimals)
{
    animals = sAnimals;
}

//Mutator function for Recursion
void Recursion::setAnimals(string varAnimals){
    animals = varAnimals;
}

//Function takes the lines from the file and places them into the Recursion Object
//Returns: N/A (void function)
void populateVec(vector<Recursion>& animals1)
{
    Recursion a1;
    ifstream infile;
    infile.open("Data.txt");
    string mal;
    
    while(infile >> mal)
        a1.setAnimals(mal);
    
    animals1.push_back(a1);
    
    infile.close();
    
}

//this function brings in the vector object, the first and last position of the vector and the item
//returns the position of the item in the vector

int bSearch(vector<Recursion> &animals1, int first, int last, string item)
{
    
    if (first > last){
        return -1;
    }
    
    int mid = first + ((last-first)/2);
    
    if (animals1[mid].getAnimals() == item){
        return mid;
    }
    
    else if(animals1[mid].getAnimals() > item){
        return bSearch(animals1, first, mid - 1, item);
    }
    
    cout << "Your animal was found at position " << mid << endl;
    return bSearch(animals1, mid + 1, last, item);
    
}

#endif /* Recursion_Functions_h */
