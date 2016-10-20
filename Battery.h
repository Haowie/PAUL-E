#include "RobotModels.h"
#include "Torso.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>

#ifndef BATTERY_H
#define BATTERY_H

using namespace std;

class Torso;
class RobotModels;

class Battery : public RobotModels
{
protected:
	double energyContained;
public:
	
	Battery();
	Battery(string name, int modelID, double cost, double price, double weight) :
		RobotModels(name, modelID, cost, price, weight){}
	double getEnergy();
	void setEnergy(double energy);
	int getInfo();
};
#endif