//Jennifer Guidotti
//CSCI 2421
//Homework 2
//September 6, 2016
//This program takes integers in from a file, then takes
//the integers and performs a union and difference on the numbers.

#include "ArrayBag.h"

#ifndef H_SETFUNCTIONS
#define H_SETFUNCTIONS

void populateSet(ArrayBag& bag1, ArrayBag& bag2);

void displayUnion(ArrayBag newBag); //a union is taking all elements of the two sets and putting it into one set.

void displayDifference(ArrayBag diffBag); //All the elements of A, but not those that exist in B

#endif