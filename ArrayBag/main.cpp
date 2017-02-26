//Jennifer Guidotti
//CSCI 2421
//Homework 2
//September 6, 2016
//This program takes integers in from a fi/Users/jenniferkane/Desktop/My Projects/Homework2/Homework2/main.cpple, then takes
//the integers and performs a union and difference on the numbers.

#include <iostream>
#include <fstream>
#include "ArrayBag.h"
#include "SetFunctions.h"

using namespace std;

int main()
{
    
    ArrayBag abag1, abag2;
    
    populateSet(abag1, abag2);
    
    ArrayBag newBag = abag1 + abag2;
    displayUnion(newBag);
    
    ArrayBag diffBag = abag1 - abag2;
    displayDifference(diffBag);
    
    //system("Pause");
    
    return 0;
    
    
}