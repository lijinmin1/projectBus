#ifndef PASSENGER_HPP_
#define PASSENGER_HPP_ 
#define MAX_STATION 10
#define MAX_BUS 10
#include <iostream>
#include <string>
#include"Bus.hpp"
#include"Station.hpp"

using namespace std;

class Passenger{
	Passenger();
	static Passenger* instance;
	Bus* busFrontPointer;
	Station* stationFrontPointer;
	
	public:
	void setBus(Bus* bus);
	Bus getBus();
	void setStation(Station* station);
	Station getStation();
	
	int queryNumOfStopBus(string stationName);
	
	int queryNumOfToBus(string stationName);
	int queryToBus(string stationName,int direction);//��ѯ����ʻ���վ��С�׵���Ϣ(ID����������)���û��ṩ���� 
	
	int queryWait(string stationName);
	
	bool queryState(int busId);
	
	int queryNumOfSeat(int busId);
	
	string queryStation(int busId);
	
	string queryNextStation(int busId);
	
	static Passenger* getInstance();
	
}; 

#endif
