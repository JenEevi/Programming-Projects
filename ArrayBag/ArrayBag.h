//  Created by Frank M. Carrano and Tim Henry. //  Copyright (c) 2016 __Pearson Education__. All right sreserved.
//Modified by TAA to remove templates and Inheritance
/** ADT bag: Array-based implementation.  @file ArrayBag.h */
//Jennifer Guidotti
//CSCI 2421
//Homework 2
//September 6, 2016
//This program takes integers in from a file, then takes
//the integers and performs a union and difference on the numbers.


#ifndef BAG_
#define BAG_

#include <vector>

typedef int ItemType;

class ArrayBag {
private:
    static const int DEFAULT_BAG_SIZE = 100;
    ItemType items[DEFAULT_BAG_SIZE]; // array of bag items
    int itemCount;                    // current count of bag items
    int maxItems;                     // max capacity of the bag
    
    // Returns either the index of the element in the array items that
    // contains the given target or -1, if the array does not contain
    // the target.
    int getIndexOf(const ItemType& target) const;
public:
    ArrayBag();
    int getCurrentSize() const; //this is just asking for the number of items that are in your bag
    bool isEmpty() const;
    bool add(const ItemType& newEntry);
    bool remove(const ItemType& anEntry);
    void clear();
    bool contains(const ItemType& anEntry) const;
    int getFrequencyOf(const ItemType& anEntry) const;
    std::vector<ItemType> toVector() const;
    ItemType getValue(int position)const; //what is at the index
    friend ArrayBag operator+(const ArrayBag&, const ArrayBag&); //for the union of the two sets
    friend ArrayBag operator-(const ArrayBag&, const ArrayBag&); //for the intersection of the two sets
};  // end Bag
#endif
