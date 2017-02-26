//Jennifer Guidotti
//CSCI 2421
//Homework 3
//September 12, 2016
//This program takes strings in from a file
//The strings are then search with a binary search function
//based upon the input of a user

#ifndef Recursion_h
#define Recursion_h

#include <Vector>
#include <string>

using namespace std;

//class for Recursion
class Recursion
{
    
private:
    string animals;
    
public:
    Recursion() { }
    Recursion(string sAnimals);
    ~Recursion() { }
    
    string getAnimals(){
        return animals;
    }
    
    void setAnimals(string varAnimals);
    
};


#endif /* Recursion_h */
