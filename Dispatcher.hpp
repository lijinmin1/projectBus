
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
	void reachAndLeave(bool change);//����״̬����վ��Ϣ��С�׺ͳ˿���Ϣ 
	void setGetOn(int geton);
	void setGetOff(int getoff);
	void changeWait(int change);//���������ˣ����������� 
	
	void setDestination(string destination);
	
//////////////////////////////////////////////////////////////////////// 
	
};
