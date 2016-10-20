#ifndef HEAD_H
#define HEAD_H

#include<string>

using namespace std;

class Head : public RobotModels
{
protected:
	int power;
public:
	Head();
	Head(string name, int modelID, double cost, double price, double weight) :
		RobotModels(name, modelID, cost, price, weight){}
	double getpower();
	void setpower(int p);
	int getInfo();
};
#endif