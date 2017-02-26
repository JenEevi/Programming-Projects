*******************************************************
*  Name      :   Jennifer Guidotti	       
*  Student ID:   106688034              
*  Class     :  CSC 2421           
*  HW#       :  1                
*  Due Date  :  August, 29, 2016
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program "matrix" reads integers from a data file, and uses
the data to implement two matrices.  It then outputs the matrices,
and computes and outputs the sum and product of the matrices.


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This creates the starting point of the game, 
   which is calling the function that starts the game.

Name:  guess.h
   Contains the definition for the class guess.  

Name: guess.cpp
   Defines and implements the guess class for the game design. 
   This class provides routines to construct and get the variables
   for the game.
   
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program does not run successfully. Need additional help
   from Tutor and professor after summer break. 
   
   The program was developed and tested on gnu g++ 4.4.2.  It was 
   compiled, run, and tested on gcc ouray.cudenver.edu.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [guidottiHW1]

   Now you should see a directory named homework with the files:
        main.cpp
        guess.h
        guess.cpp
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [guidottiHW1] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[guess]

4. Delete the obj files, executables, and core dump by
   %./make clean
