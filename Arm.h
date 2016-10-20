#ifndef ARM_H
#define ARM_H

#include <string>

using namespace std;

class Arm : public RobotModels
{
protected:
	int powerConsumed;
public:
	Arm();
	Arm(string name, int modelID, double cost, double price, double weight) :
		RobotModels(name, modelID, cost, price, weight){}

	double getPower();
	void setPower(int power);
	int getInfo();
};
#endif