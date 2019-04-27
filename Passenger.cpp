#include <iostream>
#include <string>
#include"Passenger.hpp"

using namespace std;

Passenger* Passenger::getInstance(){
	if(instance==NULL)
		instance=new Passenger;
	return instance;
}
Passenger::Passenger(){}

void Passenger::setBus(Bus* bus){
	busFrontPointer=bus;
}
Bus Passenger::getBus(){
	return *busFrontPointer;
}
void Passenger::setStation(Station* station){
	stationFrontPointer=station;
}
Station Passenger::getStation(){
	return *stationFrontPointer;
}

int Passenger::queryNumOfStopBus(string stationName){
	// ���� MAX_BUS ��վ
	int i;
	for(i=0;i<MAX_STATION;i++){
		if(stationFrontPointer[i].getName()==stationName)
			break;
	}
	if(i==MAX_STATION)
		return -1;
	else{
		return stationFrontPointer[i].getNumOfStopBus();
	}
}
int Passenger::queryNumOfToBus(string stationName){
	// ���� MAX_BUS ��վ
	int i;
	for(i=0;i<MAX_STATION;i++){
		if(stationFrontPointer[i].getName()==stationName)
			break;
	}
	if(i==MAX_STATION)
		return -1;
	else{
		return stationFrontPointer[i].getNumOfToBus();
	}
}
// ��ѯ��һվ�ͷ�������û��ĵ�С�ף��û��ṩ���� 
int Passenger::queryToBus(string stationName,int direction){
	// ���� MAX_BUS ��վ
	int i;
	for(i=0;i<MAX_BUS;i++){
		if(busFrontPointer[i].getState()==1&&busFrontPointer[i].getDirection()==direction
				&&busFrontPointer[i].getNextStation()==stationName)
			break;
	}
	if(i==MAX_BUS)
		return -1;
	else{
		return busFrontPointer[i].getId();
	}
	 
}
int Passenger::queryWait(string stationName){
	int i;
	for(i=0;i<MAX_STATION;i++){
		if(stationFrontPointer[i].getName()==stationName)
			break;
	}
	if(i==MAX_STATION)
		return -1;
	else{
		return stationFrontPointer[i].getNumOfWait();
	}
}
 
	
bool Passenger::queryState(int busId){
	int i;
	for(i=0;i<MAX_BUS;i++){
		if(busFrontPointer[i].getId()==busId)
			break;
	}
	if(i==MAX_BUS)
		return -1;
	else{
		return busFrontPointer[i].getState();
	}
}
	
int Passenger::queryNumOfSeat(int busId){
	int i;
	for(i=0;i<MAX_BUS;i++){
		if(busFrontPointer[i].getId()==busId)
			break;
	}
	if(i==MAX_BUS)
		return -1;
	else{
		return busFrontPointer[i].getAvailableSeats();
	}
}
	
string Passenger::queryStation(int busId){
	int i;
	for(i=0;i<MAX_BUS;i++){
		if(busFrontPointer[i].getId()==busId)
			break;
	}
	if(i==MAX_BUS)
		return "error";
	else{
		return busFrontPointer[i].getNextStation();
	}
}
	
string Passenger::queryNextStation(int busId){
	int i;
	for(i=0;i<MAX_BUS;i++){
		if(busFrontPointer[i].getId()==busId)
			break;
	}
	if(i==MAX_BUS)
		return "error";
	else{
		return busFrontPointer[i].getNextStation();
	}
}

