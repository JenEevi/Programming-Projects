//Jennifer Guidotti
//CSCI 2421
//Homework 7
//October 19, 2016
//
//
//  Event.h


#ifndef Event_h
#define Event_h

#include <vector>
#include <queue>

using namespace std;

class Event{
    private:
        int arrivalTime; //time that it is that the transaction occured
        int transactionTime; //time that the transaction took
        int wait = 0; //counts the wait time
        bool inQueue = false; //checks it customer is in que
    
    public:
        //default constuctor
        Event(){};
        //Accessors and Mutators
        int getTime(){return arrivalTime;}
        int getTransactionTime(){return transactionTime;}
        void setTime(int aTime){arrivalTime = aTime;}
        void setTransactionTime(int tTime){transactionTime = tTime;}
        int getWait(){return wait;}
        void setWait(int eWait){wait = eWait;}
        bool getQueue(){return inQueue;}
        void setQueue(bool eQue){inQueue = eQue;}
        void incWait(){wait++;}
        void decTransactionTime(){transactionTime--;}
    
    
};

#endif /* Event_h */
