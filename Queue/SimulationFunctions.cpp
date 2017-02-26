//Jennifer Guidotti
//CSCI 2421
//Homework 7
//October 19, 2016
//
//  Event Functions.cpp
//

#include <queue>
#include <iostream>
#include <vector>
#include <fstream>
#include "Event.h"

using namespace std;

//Reads in the values from a file to the vector, updates the vector
//returns nothing
void read(vector<Event> &eventVec){
    
    ifstream myFile;
    myFile.open("BankTransactions.txt"); //opens file
    int arrivalTime, transactionTime;
    
    while(!myFile.eof()){ //while not the end of the time
        myFile >> arrivalTime >> transactionTime; //get next arrival time and a transaction time from file
        
        Event temp;
        temp.setTime(arrivalTime); //sets the arrival time
        temp.setTransactionTime(transactionTime); //sets the transaction time
        
        eventVec.push_back(temp); //places both of these items into the eventVector
        
    }
}

//Processes the events that were placed in the vector
//returns the updated vector
vector<Event> processEvent(vector<Event> &eventVec) {
    
    int close = eventVec[eventVec.size() - 1].getTime() + eventVec[eventVec.size() - 1].getTransactionTime() + 1; //calcualtes the very last time that a transaction could occur based upon the values set in the vector
    
    int arrivalIndex = 0; //counter
    queue<Event> eQueue; //creates a queue
    bool MiniuteChange = false; //watches if the mins change (flag)
    
    for (int i = 0; i < close; ++i) {
        if (arrivalIndex < eventVec.size() && eventVec[arrivalIndex].getTime() == i) { //if the index we are counting is equal to the arrival time of the next event
            eQueue.push(eventVec[arrivalIndex]); //pushes this into the queque
            eventVec[arrivalIndex].setQueue(true); //sets an event to a que, meaning a customer is with a teller
            cout << "Processing an arrival event at time: " << i << endl;
            arrivalIndex++; //increments the arrivalIndex
        }
        for (int j = 0; j < eventVec.size(); ++j) {
            if (!eQueue.empty() && eventVec[j].getTime() == eQueue.front().getTime() && !MiniuteChange){ //compares the arrival time to the front element of the queue to the arrival time of the event queue
                eQueue.front().decTransactionTime(); //decreases the transaction time
            }
            else if (!eQueue.empty() && eventVec[j].getQueue() == true)//if the que is not empty and the que is not free, then add to the wait time
                eventVec[j].incWait(); //increments the wait
            
            if (!eQueue.empty()) { //if eQueue is not empty
                if (eQueue.front().getTransactionTime() == 0) {
                    Event top = eQueue.front(); //creates a new event, and sets that to the front of the que
                    int loc = 0;
                    for (int k = 0; k < eventVec.size(); ++k) { //finding the exact variable on the top of the que
                        if (top.getTime() == eventVec[k].getTime()){ //if the top of the que is equal to the time of the event
                            loc = k;
                            break;
                        }
                    }
                    eQueue.pop(); //pops off this event
                    cout << "Processing a departure event at time: " << i+1 << endl; //departing on the next min.
                    eventVec[loc].setQueue(false); //sets the que to false since there is no one in it
                    MiniuteChange = true;
                }
            }
        }
        
        MiniuteChange = false;
    }
    
    return eventVec; //returns this event
}

//Calculates the average wait time
//returns this average
float displayAvg(vector<Event> eventVec){
    float totalWait = 0; //variable to hold the totalWait
    
    for (int i = 0; i < eventVec.size(); ++i) {
        totalWait += eventVec[i].getWait();
    }
    return totalWait / eventVec.size(); //calculates the average

}
