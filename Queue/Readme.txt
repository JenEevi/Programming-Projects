*******************************************************
*  Name      : Jennifer Guidotti       
*  Student ID: 106688734
*  Class     :  CSC 2421           
*  HW#       :  7                
*  Due Date  :  October 19, 2016
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program “Bank Simulation” evaluates the arrival times, and transaction times of events at a bank to determine the average time per transaction.


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main program.  Call sub-functions that read in data from the file, process this data, and finally display the results.

Name:  Events.h
   Contains the definition for the class Event.

Name: SimulationFunctions.h
   Contains the function calls for the simulation functions

Name: SimulationFunctions.cpp
   Contains the functions for the bank program. Includes the functions, read, processEvent, and displayAvg. 

  
   
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
       % unzip [GuidottiHW7]

   Now you should see a directory named homework with the files:
        main.cpp
	Events.h
        SimulationFunctions.cpp
	SimulationFunctions.h
        makefile
        Readme.txt
	BankTransactions.txt


2. Build the program.

    Change to the directory that contains the file by:
    % cd [GuidottiHW6] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[Bank]

4. Delete the obj files, executables, and core dump by
   %./make clean
