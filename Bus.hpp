#include <iostream>
#include <string>
#ifndef Bus_h  
#define Bus_h 
using namespace std;
class Bus{
	static int id;
	int state;//0代表 停靠，1代表行驶 
	int availableSeats;//车座数量固定 
	string nextStation;
	int direction;//0代表反向，1代表正向(数组下标从小到大)
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
