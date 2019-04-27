#ifndef STATION_HPP_
#define STATION_HPP_ 
#include <iostream>
#include <string>
using namespace std;

class Station{
	string name;
	int numOfStopBus;
	int numOfToBus;
	int numOfWait;
	int numOfGetOn;
	
	
	
	public:
	Station(string name="",int numOfStopBus=0,	int numOftoBus=0,int numOfwait=0,int numOfgeton=0);
	string getName();
	
	int  getNumOfStopBus();
	void setNumOfStopBus(int stopBus);
	
	int  getNumOfToBus();
	void setNumOfToBus(int toBus);
	
	int getNumOfWait();
	void setNumOfWait(int wait);
	
	
	int getNumOfGetOn();
	void setNumOfGetOn(int geton);
}; 

#endif
