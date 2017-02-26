//
//  Header.h
//  Homework_1
//
//  Created by Jennifer Guidotti on 8/28/16.
//  Copyright © 2016 Jennifer  Guidotti. All rights reserved.
//

#ifndef Header_h
#define Header_h
#include <vector>

class guess {
        //member variables
    private:
        int *Range, *Integers;
        int newRange, newIntegers, newrandomNum;
    
    public:
        //default constructor
    guess();
    
        //overload constructor
    guess(int, int, int);
    
        //destructor destroys guess from memory
    ~guess();
        //checks if guess is corret against the random number
    bool checkGuess();
    //reads the values from the user
    void readBeginValues();
    //Generates the randomNumber
    int generateRandom(std::vector<int>&);
    
        //Accessor
    int getrange();
    int getintegers();
    int getrandomNum();
    
        //mutator
    void setintegers(int);
    void setrange(int);
    void setrandomNum(int);
    
    
    
};

#endif /* Header_h */
