//
//  main.cpp
//  Homework_1
//
//  Created by Jennifer Kane on 8/28/16.
//  Copyright © 2016 Jennifer  Guidotti. All rights reserved.
//

#include <iostream>
#include "guess.h"

using namespace std;

int main ()

{
    //creats an object of Guess
    guess Guess;

    //starts function
    Guess.readBeginValues();
    
    //ideally once complete, this would ask the user if they would like to play again
    cout << "Play again (Y/N)? " << endl;
    char choice;
    cin >> choice;
    
    if(choice =='n' || choice =='N')
    {
        
    cout << "Good Bye" << endl;
        
    }
    
return 0;
    
}




