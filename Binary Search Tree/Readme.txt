*******************************************************
*  Name      : Jennifer Guidotti       
*  Student ID: 106688734
*  Class     :  CSC 2421           
*  HW#       :  8                
*  Due Date  :  October 29, 2016
*******************************************************


                 Read Me


*******************************************************
*  Description of the program
*******************************************************

The program “Binary Search Tree” gives an example of how a BST(Binary Search Tree) works with a set of data.


*******************************************************
*  Source files
*******************************************************

Name:  main.cpp
   Main driver program. Initializes the BST object. Calls sub-functions that performs a variety of tasks that include, adding, sorting, deleting, and finding the min, max, successor, and predecessor.

Name:  Node.h
   Contains the definition for the class Node.

Name: BSTree.h
   Contains the definition for the class BSTree.

Name: BSTree.cpp
   Contains the functions for the Binary Search Tree that not only construct the BST, but allow for various manipulations. Includes the functions, freeNode, addNode, findNode, printPreorder, printInorder, printPostOrder, min, max, successor, predecessor, and deleteNode.

  
   
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
       % unzip [GuidottiHW8]

   Now you should see a directory named homework with the files:
        main.cpp
	Node.h
        BSTree.h
	BSTree.cpp
        makefile
        Readme.txt


2. Build the program.

    Change to the directory that contains the file by:
    % cd [GuidottiHW8] 

    Compile the program by:
    % make

3. Run the program by:
   % ./[BST]

4. Delete the obj files, executables, and core dump by
   %./make clean
