*******************************************************
*  Name      : Jennifer Guidotti       
*  Student ID: 106688734
*  Class     :  CSC 2421           
*  HW#       :  6                
*  Due Date  :  October 5, 2016
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program “Dictionary” creates a STL List. The list contains a string of words from a file.


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  This is the driver program that reads two files, then calls sub-functions that compare the words from one file to another. Lastly, a sub function is called to print the list of strings, but in reverse order.

Name:  DictEntry.h
   Contains the definition for the class DictEntry (Dictionary Entry).

Name: dictionary.h
   Contains the definition for the class dictionary. 

Name: dictionary.cpp
   Contains the functions for the dictionary program. Includes the functions, searchForward, searchBackward, and revPrintList. 

  
   
*******************************************************
*  Circumstances of programs
*******************************************************

   The program compiles successfully on Xcode.
   
   The program was tested on gnu g++ 4.4.2.  It was 
   compiled, run, and tested on gcc ouray.cudenver.edu.


*******************************************************
*  How to build and run the program
*******************************************************

1. Uncompress the homework.  The homework file is compressed.  
   To uncompress it use the following commands 
       % unzip [GuidottiHW6]

   Now you should see a directory named homework with the files:
        main.cpp
        dictionary.cpp
        dictionary.h
	DictEntry.h
        makefile
        Readme.txt
	findwords.txt
	dictionary.txt


2. Build the program.

    Change to the directory that contains the file by:
    % cd [GuidottiHW6] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[dictionary]

4. Delete the obj files, executables, and core dump by
   %./make clean
