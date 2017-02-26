*******************************************************
*  Name      : Jennifer Guidotti       
*  Student ID: 106688734
*  Class     :  CSC 2421           
*  HW#       :  4                
*  Due Date  :  September 21, 2016
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program “MyVector” creates a vector object, then uses
various created functions that mimic the STL Vector member
functions.


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls sub-functions
   to search the vector, add items to the vector, and remove an item from
the vector

Name:  MyVector.h
   Contains the definition for the class MyVector. 

Name: Recursion_Functions.h
   Contains the functions for the MyVector program. Includes the functions, pop_back,
push_back, search, size, empty, and a function that overloads the [] operators. 
All of these functions mimic the functions that you would see int the STL Vector.

  
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program compiles successfully on Xcode.
   
   The program was developed and tested on gnu g++ 4.4.2.  It was 
   compiled, run, and tested on gcc ouray.cudenver.edu.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [GuidottiHW4]

   Now you should see a directory named homework with the files:
        main.cpp
        MyVector.cpp
        MyVector.h
        makefile
        Readme.txt
	 analysis.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [GuidottiHW4] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[myvector]

4. Delete the obj files, executables, and core dump by
   %./make clean
