//Jennifer Guidotti
//Homework 4 - MyVector
//Worked on every function except for pop_back - which was already complete
//Make sure to comment changes that you make
#include <iostream>
using namespace std;

#include "MyVector.h"

namespace HW4 {
    MyVector::MyVector()
    {
        //may be empty since MyVector.h initializes values
    }
    
    T MyVector::operator[] (int index)
    {
        MyVector *tempVPtr = new MyVector; //Make a temporary vector
        tempVPtr = beginPtr;
        
        for(int i = 0; i < index; ++i){
            tempVPtr = tempVPtr->nextPtr;
            }
            /* Start at beginPtr and from nextPtr to nextPtr, index times*/
        //return the value at the correct object
        return tempVPtr->tValue;
    }
    
    void MyVector::pop_back()
    {
        //First check if it is empty
        if (empty() )
            return;
        else
        {
            //Start at beginPtr
            MyVector *vecPtr = beginPtr;
            
            //Allocate a new pointer object
            MyVector *vecPrevPtr = new MyVector;
            
            //Allocate a new pointer object
            MyVector *vecPrevPrevPtr = new MyVector;
            
            //If pointing to null, there is nothing to remove
            if (vecPtr == nullptr)
                return;
            else
                while (vecPtr != nullptr)
                {
                    /*Think about a linked chain.  We are going to keep track of the last node that points to nullptr, the second last node, and the third last node*/
                    
                    
                    /*The only way we know that we have hit the end of the link is to look for a node that points to nullptr, not another node. As we advance from the nextPtr to the one that is pointing to, we need to keep track of the two previous pointers, so we have a way of getting to the previous node.  Once we delete the last node, we now need to point the previous node to null pointer, which means we need to know where its previous pointer points to.  Keep in mind these are not two-way links, so as we are going forward in the chain we have to keep track of the previous links to go back.*/
                    vecPrevPrevPtr->nextPtr =  vecPrevPtr;
                    vecPrevPtr->nextPtr = vecPtr;
                    vecPtr = vecPtr->nextPtr;
                }
            /*if you don't delete the pointer, the memory will not be released but you won't be able to get to it...this causes a memory leak*/
            delete vecPtr;
            //the last one now points to the previous
            nextPtr = vecPrevPtr;
            //we have to reduce the size since we deleted the last link
            vsize--;
            
            
        }
        return;
    }
    
    void MyVector::push_back(T value)
    {
        
        //check if it is empty
        //if so create a new node (using dynamic memory), fill that new node with the value and increase the size
        if (empty() ){ //checking if empty
            MyVector* newVec = new MyVector; //New node
            beginPtr = newVec; //beginPtr is new node
            newVec->nextPtr = nullptr;
            newVec->tValue = value; //fills new node
            vsize++; //increases the size
        }else
        {
    
            //Start at beginPtr
            MyVector *vecPtr = beginPtr;
            
            
            while (vecPtr->nextPtr != nullptr) //while loop, vecPrt is not nullpointer
            {
                vecPtr = vecPtr->nextPtr;
            }
            MyVector* newVec = new MyVector; //creates a new node
            newVec->tValue = value; //adds the vaule to the node
            vecPtr->nextPtr = newVec; //the last pointer is now this new node
            vsize++; //increases the size
            
        }
        
        
    }

    int MyVector::size()
    {
        return vsize; //returns the size of the vector
    }
    
    bool MyVector::empty()
    {
        
        if(beginPtr == nullptr) return true; //if beginPtr is empty, its pointing to nullptr!
                        //Checks to see if empty (meaning beginPtr is pointing to what?)
        else{
        return false;
        }
    }
    
    /*Returns -1 if not found, otherwise returns the index of the value*/
    int MyVector::search(T value)
    {
        MyVector* tempVec = new MyVector;
        tempVec = beginPtr;
        
        for (int i = 0; i < vsize; ++i){ //Going throught the entire vector
            if (tempVec->tValue == value){//if the current node's value is equal to the value we are
                //searching for.
                return i;// return the index that we are sitting at.
            }
            else{//If the node's value  is not equal to the value we are looking for
                //Than move to the next element in the linked list vector.
                tempVec = tempVec->nextPtr;
            }
        }
        //If we never find the value we are looking for than the loop should exit and we return -1.
        return -1; //returns -1
        
            
        /*traverse the node looking for the value.  A for loop works well here, as return jumps out of the function. Note that you are keeping track of size in another function*/
    }
    
}//HW4
