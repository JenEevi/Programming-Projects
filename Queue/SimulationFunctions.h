//
//Jennifer Guidotti
//CSCI 2421
//Homework 7
//October 19, 2016
//
//
//  SimulationFunctions.h
//

#include "Event.h"

#ifndef SimulationFunctions_h
#define SimulationFunctions_h

//reads in the arrival and transaction times fromt he file
void read(vector<Event>& eVec);

//processes these events as they come in
vector<Event> processEvent(vector<Event>& eVec);

//calculates the average
float displayAvg(vector<Event> eVec);

#endif /* SimulationFunctions_h */
