//Jennifer Guidotti
//CSCI 2421
//Homework 6
//October 5, 2016
//
//dictionary.cpp

#include "dictionary.h"

using namespace std;

dictionary::dictionary() {}

/*Searches the list starting at the front of the list and moving to the back
 Returns the number of searches it took to find the findString, or a -1 if not found*/
int dictionary::searchForward(list<DictEntry> &wordList, wordType &findString) {
    
    //forward iterator
    list<DictEntry>::iterator fIter;
    
    bool stringFound = false;
    int numSearches = 0;
    //going forward through the list
    for(fIter = wordList.begin(); fIter != wordList.end(); fIter++) {
        ++numSearches;
        
        // if we found the word we are searching for stop the loop
        if (fIter->getWord() == findString) {
            stringFound = true;
            break;
        }
    }

    if (stringFound)
        return numSearches; //if the string we were searching for was found, then return the number of searches that it took
    else
        return -1; //string was not found
}

/*Searches the list starting at the back of the list and moving to the front
 Returns the number of searches it took to find the findString, or a -1 if not found*/
int dictionary::searchBackward(list<DictEntry> &wordList, wordType &findString) {
    
    ///reverses the direction iterator takes through the list
    list<DictEntry>::reverse_iterator rIter;
    
    bool stringFound = false;
    int numSearches = 0;
    
    //going backwards through the list
    for (rIter = wordList.rbegin(); rIter!= wordList.rend(); rIter++) {
        ++numSearches;
        
        // if we found the word we are searching for stop the loop
        if (rIter->getWord() == findString) { //if the string we were looking for was in wordlist
            stringFound = true;
            break;
        }
    }
    
    if (stringFound)
        return numSearches; //if the string we were searching for was found, then return the number of searches that it took
    else
    return -1; //string was not found
}

/*Prints the list of words in reverse alphabetic order to a file*/
void dictionary::revPrintList(ostream& output, list<DictEntry> &wordList) {
    
    //reverses the direction iterator takes through the list
    list<DictEntry>::reverse_iterator rIter;
    
    for (rIter = wordList.rbegin(); rIter != wordList.rend(); rIter++) {
        output << rIter->getWord() << endl; //prints each word
    }
}
