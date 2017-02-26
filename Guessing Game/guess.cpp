//
//  guess.cpp
//  Homework_1
//
//  Created by Jennifer Guidotti on 8/28/16.
//  Copyright © 2016 Jennifer  Guidotti. All rights reserved.
//

#include "guess.h"
#include <iostream>
#include <vector>

using namespace std;

//initialization
guess::guess(){
    Range= 0;
    Integers = 0;
}

guess::guess(int integers, int range, int randomNum){
    newIntegers = integers;
    newRange = range;
    newrandomNum = randomNum;
}

//Destructor
guess::~guess()
{

}

//Accessor Functions
int guess::getrange(){
    return newRange;
}

int guess::getintegers(){
    return newIntegers;
}

//Mutator Functions
void guess::setrange(int range){
    newRange = range;
}

void guess::setintegers(int integers)
{
    newIntegers = integers;
}

void guess::setrandomNum(int randomNum)
{
    newrandomNum = randomNum;
}

//Reads in the values of integers and the range for the game
void guess::readBeginValues(){
    vector<int> r;
    vector<int> i;
    
    int integers, range;
    cout << "Please enter the top range of numbers you would like to play with: " << endl;
    cin >> range;
    
    while (range > 0)
    {
        r.push_back(range);
    }

    cout << "Please enter how many numbers you would like to guess: " << endl;
    cin >> integers;
    
    while(integers > 0)
    {
        i.push_back(integers);
    }
    
    //checkGuess();
}

//I couldn't get either of these functions to work

//checks the guess from the user against the random number created
//returns boolean value
/*bool guess::checkGuess(){
    
    int userGuess;
    cout << "Enter your guesses for the "<< newIntegers <<" integers in the range from 1 to "<< newRange <<" that have been selected:" << endl;
    cin >> userGuess;
    
    if (userGuess == newrandomNum)
    {
        cout << "You are correct!" << endl;
        return true;
     
    }
}

//Function generates the random numbers
//places the random number into a vector
int guess::generateRandom(vector<int>& getrandomVec){

    srand((unsigned)time(NULL));
    
    int a = rand() % newIntegers + 1;
    for (int i =0; i < a; i++){
        int b = rand() % newIntegers + 1;
        getrandomVec.push_back(b);
        return generateRandom(<#vector<int> &getrandomVec#>);
        
        
    }
}
 */



