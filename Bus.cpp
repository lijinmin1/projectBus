#include <iostream>
#include <string>
#include "Bus.hpp"
using namespace std;
int Bus::id=0;
Bus::Bus(int state,int availableSeats,string nextstation){
	this->state=state;
	this->availableSeats=availableSeats;
	this->nextStation=nextStation;
}
	 
int Bus::getId(){
	return id;
}
	
int Bus::getState(){
	return state;
}
void Bus::setState(){
	if(state==0)
		state=1;
	else
		state=0;
}
	
int Bus::getAvailableSeats(){
	return availableSeats;
}
void Bus::setAvailableSeats(int change){
	availableSeats+=change;
}
	
string Bus::getNextStation(){
	return nextStation;
}
void Bus::setNextStation(string next){
	nextStation=next;
} 
	
int Bus::getDirection(){
	return direction;
}
void Bus::setDirection(){
	if(direction==0)
		direction=1;
	else
		direction=0;
} 
	
int Bus::getNumOfGetOff(){
	return numOfGetOff;
}
void Bus::setGetNumOfGetOff(int getoff){
	numOfGetOff=getoff;
}

