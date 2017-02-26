*******************************************************
*  Name      : Jennifer Guidotti       
*  Student ID: 106688734
*  Class     :  CSC 2421           
*  HW#       :  3                
*  Due Date  :  September 12, 2016
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program “Recursion” reads strings from a data file, and uses
the data to implement one Vector object.  It then uses the object to use
a binary search function which searches for the item that the user entered.


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that calls sub-functions
   to read data from an input file, use the data to create one object,
   and then uses this object with a binary search function.

Name:  Recursion.h
   Contains the definition for the class ArrayBag.  

Name: Recursion_Functions.h
   Contains the functions for the Recursion program. Includes functions that read
in the strings from a file, and a function for a recursive binary search.

  
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program runs successfully as built on X-code.
However, I do think that my output is not completely successful.  
   
   The program was developed and tested on gnu g++ 4.4.2.  It was 
   compiled, run, and tested on gcc ouray.cudenver.edu.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [GuidottiHW3]

   Now you should see a directory named homework with the files:
        main.cpp
        Recursion.h
        Recursion_Functions.h
	SetFunctions.cpp
        makefile
        Readme.txt

2. Build the program.

    Change to the directory that contains the file by:
    % cd [GuidottiHW3] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[recursive]

4. Delete the obj files, executables, and core dump by
   %./make clean
