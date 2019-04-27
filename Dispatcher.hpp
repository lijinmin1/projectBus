
#include <iostream>
#include <string>
#include "Bus.hpp"

using namespace std;

class Dispatcher{
	Dispatcher();
	static Dispatcher* instance;
	Bus* bus;
	
	public:
	
	static Dispatcher* getInstance();
	
	void setBus(Bus* bus);
	void reachAndLeave(bool change);//更新状态，车站信息，小白和乘客信息 
	void setGetOn(int geton);
	void setGetOff(int getoff);
	void changeWait(int change);//正代表来人，负代表走人 
	
	void setDestination(string destination);
	
//////////////////////////////////////////////////////////////////////// 
	
};
