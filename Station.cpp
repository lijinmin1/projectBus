#include <iostream>
#include <string>
#include "Station.hpp" 
using namespace std;


Station::Station(string name,int numOfStopBus,	int numOftoBus,int numOfwait,int numOfgeton){
	this->name=name;
	this->numOfStopBus=numOfStopBus;
	this->numOfToBus=numOftoBus;
	this->numOfWait=numOfwait;
	this->numOfGetOn=numOfgeton;
}

string Station::getName(){
	return name;
}
	
int  Station::getNumOfStopBus(){
	return numOfStopBus;
}
void Station::setNumOfStopBus(int stopBus){
	numOfStopBus=stopBus;
}
	
int Station::getNumOfToBus(){
	return numOfToBus;
}
void Station::setNumOfToBus(int toBus){
	numOfToBus=toBus;
}	
int Station::getNumOfWait(){
	return numOfWait;
}
void Station::setNumOfWait(int wait){
	numOfWait=wait;
}
int Station::getNumOfGetOn(){
	return numOfGetOn;
}
void Station::setNumOfGetOn(int geton){
	numOfGetOn=geton;
}
