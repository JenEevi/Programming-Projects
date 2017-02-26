//Jennifer Guidotti
//CSCI 2421
//Homework 6
//October 5, 2016
//
//main.cpp

#include "dictionary.h"
#include "DictEntry.h"
#include <iostream>
#include <fstream>

using namespace std;

int main() {

    list<DictEntry> wordlist; //Creates a new list DictEntry object
    dictionary Dictionary; //dictionary object created in order to use the member functions
    
    DictEntry temp; //Createing a temporary object
    ifstream infile;
    infile.open("Dictionary.txt"); //opens the first file
    string fileWords;
    cout << "Opening Dictionary.txt" << endl << endl;
    while(!infile.eof()){ //Keep reading unless its the end of the file
        infile >> fileWords;
        temp.setWord(fileWords); //places words in the file into temp
        wordlist.push_back(temp); //the words places in temp, are placed into the list
    }
    
    infile.close(); //closes Dictionary.txt
    wordlist.sort(); //sorts wordlist
    
    infile.open("findwords.txt"); //opens the next file
    string otherWords;
    
    cout << "Opening findwords.txt. If the words in findwords are found, it will return the number of searches it took to find the words forward and backward. If the word was not found, a -1 will appear." << endl << endl;
    
    while(!infile.eof()){ //Keep reading unless its the end of the file
        infile >> otherWords;
        //searches forward for the words in the file that match the words in dictionary.txt
        cout << "Amount of searches forward for " << otherWords << ": " << Dictionary.searchForward(wordlist, otherWords) << endl;
        //searches backward for the words in the file that match the words in dictionary.txt
        cout << "Amount of searches backward for " << otherWords << ": " << Dictionary.searchBackward(wordlist, otherWords) << endl;
    }
    
    infile.close(); //closes the file
    
    ofstream outfile; //output stream
    outfile.open("ReverseTxt.txt"); //creates ReverseTxt file
    Dictionary.revPrintList(outfile, wordlist); //places the words, in reverse order in the text file.
    outfile.close(); //closes the file
    
    return 0;
    
    }
