#ifndef LOCOMOTOR_H
#define LOCOMOTOR_H

#include <string>

using namespace std;

class Locomotor : public RobotModels
{
protected:
	double maxSpeed;
	double powerConsumed;
public:
	Locomotor();
	Locomotor(string name, int modelID, double price, double cost, double weight) :
		RobotModels(name, modelID, cost, price, weight){}

	double getMaxSpeed();
	double getPowerConsumed();
	void setMaxSpeed(double speed);
	void setPowerConsumed(double power);
	int getInfo();
};
#endif