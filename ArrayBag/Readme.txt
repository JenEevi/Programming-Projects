*******************************************************
*  Name      : Jennifer Guidotti       
*  Student ID: 106688734
*  Class     :  CSC 2421           
*  HW#       :  2                
*  Due Date  :  September 6, 2016
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program “ArrayBag” reads integers from a data file, and uses
the data to implement two ArrayBag objects.  It then outputs the
union and the difference of the two objects.


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls sub-functions
   to read data from an input file, use the data to create two bag objects,
   and then create a union of the two items, followed by the difference.

Name:  ArrayBag.h
   Contains the definition for the class ArrayBag.  

Name: ArrayBag.cpp
   Defines and implements the ArrayBag class for implementing an ArrayBag.  
   This class provides routines to construct and get the ArrayBag.

Name: SetFunctions.h
   Contains the prototypes for the ArrayBag program support functions.

Name: SetFunctions.cpp
   Includes functions to display a greeting, populate two ArrayBag objects
   from a data file, and display the set and difference of the two objects.
   
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully as built on X-code.  
   
   The program was developed and tested on gnu g++ 4.4.2.  It was 
   compiled, run, and tested on gcc ouray.cudenver.edu.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [GuidottiHW1]

   Now you should see a directory named homework with the files:
        main.cpp
        ArrayBag.h
        ArrayBag.cpp
	Setfunctions.h
	SetFunctions.cpp
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [GuidottiHW2] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[arraybag]

4. Delete the obj files, executables, and core dump by
   %./make clean
