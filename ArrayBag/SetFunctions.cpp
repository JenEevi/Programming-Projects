//Jennifer Guidotti
//CSCI 2421
//Homework 2
//September 6, 2016
//This program takes integers in from a file, then takes
//the integers and performs a union and difference on the numbers.

#include <iostream>
#include <fstream>
#include <sstream>
#include <set>
#include "SetFunctions.h"
#include "ArrayBag.h"

using namespace std;


//Function calculates the union of two bags
//Returns: the union of the two bags - newBag

ArrayBag operator+(const ArrayBag& bag1, const ArrayBag& bag2)
{
    ArrayBag newBag; //creates a new object
    newBag.clear();
    
    for (int i = 0; i < bag1.getCurrentSize(); ++i)
        if (newBag.contains(bag1.items[i]) == false)
        {
            newBag.add(bag1.items[i]);
        }
    for (int i = 0; i < bag2.getCurrentSize(); ++i)
        if (!newBag.contains(bag2.items[i]))
        {
            newBag.add(bag2.items[i]);
        }
    
    return newBag;
}

//Function calculates the difference of the two bags
//Returns: the difference between the two bags
ArrayBag operator-(const ArrayBag& bag1, const ArrayBag& bag2)
{
    ArrayBag diffBag = bag1;
    ArrayBag noobBag = bag1;
    
    for (int i = 0; i < bag2.getCurrentSize(); ++i) {
        if (diffBag.contains(bag2.getValue(i))) {
            diffBag.remove(bag2.getValue(i));
        }
    }
    int bagSize = noobBag.getCurrentSize();
    
    for(int i =0; i< bagSize; ++i){//For all the elements in the first bag
        if (diffBag.contains(noobBag.getValue(i)))
        {// If the element is in the bag remove it
            diffBag.remove(noobBag.getValue(i));
            if(!diffBag.contains(noobBag.getValue(i)))
            {//If the there are no instances of the element
                diffBag.add(noobBag.getValue(i));//Add it back since we just don't want duplicates
            }
        }
    }
    
    return diffBag;
}
//Function takes the lines from the file and places them into the ArrayBag objects
void populateSet(ArrayBag & bag1, ArrayBag & bag2)
{
    ifstream infile;
    infile.open("Integers.txt");
    string first, second, temp = "";
    int valueStored;
    getline(infile, first);
    getline(infile, second);
    
    for (int i = 0; i < first.length(); ++i) {
        while (first[i] != ' ' && i < first.length()) {
            temp += first[i];
            ++i;
        }
        valueStored = atoi(temp.c_str());// convert the string into an int
        bag1.add(valueStored);
        //cout << temp << " ";
        temp = "";
    }
    cout << endl;
    for (int i = 0; i < second.length(); ++i) {
        while (second[i] != ' ' && i < second.length()) {
            temp += second[i];
            ++i;
        }
        valueStored = atoi(temp.c_str());
        bag2.add(valueStored);// convert the string into an int
        //cout << temp << " ";
        temp = "";
    }
    
}

//Function displays the union of the two sets
//void function, doesn't return a value, just displays
void displayUnion(ArrayBag newBag)
{
    cout << "The union of the two sets are: " << endl <<"{ ";
    for (int i = 1; i < newBag.getCurrentSize(); ++i)
        cout << newBag.getValue(i) << " ";
    cout << "}\n";
    
    
}

//Function displays the difference of the two sets
//void function, doesn't return a value, just displays
void displayDifference(ArrayBag diffBag)
{
    cout << "The difference of the two sets are: " << endl << "{ ";
    for (int i = 0; i < diffBag.getCurrentSize(); ++i)
        cout << diffBag.getValue(i) << " ";
    cout << "}\n";
}

