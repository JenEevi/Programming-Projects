//Jennifer Guidotti
//CSCI 2421
//Homework 7
//October 19, 2016
//
//main.cpp

#include <queue>
#include <iostream>
#include <vector>
#include "Event.h"
#include "SimulationFunctions.h"

using namespace std;

int main(){

    vector<Event> eventVec; //creates a new vector of type Event
    
    cout << "Vector Created" << endl; //just testing
    
    eventVec[10]; //sets the size of the vector to 10
    
    cout << "Adding 10 elements" << endl; //just testing
    
    read(eventVec); //reads in the values from a file into eventVec
    
    cout << "Reading in values\n" << endl; //just testing
    cout << "Simulation Begins" << endl;
    
    processEvent(eventVec); //Process the values from the file
    
    cout << "Simulation ends" << endl;
    cout << endl;
    
    cout << "Final Statistics\n";
    cout << "The total number of arrivals: " << eventVec.size() << endl;
    cout << "The average time spent waiting in line: " << displayAvg(eventVec) << endl;
    return 0;
}
