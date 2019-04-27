#include <iostream>
#include <string>
#ifndef Bus_h  
#define Bus_h 
using namespace std;
class Bus{
	static int id;
	int state;//0���� ͣ����1������ʻ 
	int availableSeats;//���������̶� 
	string nextStation;
	int direction;//0������1��������(�����±��С����)
	int numOfGetOff;
	
	public:
	Bus(int state=0,int availableSeats=30,string nextstation="");
	 
	int getId();
	
	int getState();
	void setState();
	
	int getAvailableSeats();
	void setAvailableSeats(int change);
	
	string getNextStation();
	void setNextStation(string next); 
	
	int getDirection();
	void setDirection(); 
	
	int getNumOfGetOff();
	void setGetNumOfGetOff(int getoff);
}; 
#endif
