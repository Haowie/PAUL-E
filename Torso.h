#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include "RobotModels.h"

#ifndef TORSO_H
#define TORSO_H

using namespace std;

class RobotModels;
class Battery;


class Torso : public RobotModels
{
protected:
	int battery;
public:
	Torso();
	Torso(string torsoName, int torsoID, double cost, double price, double torsoWeight) :
		RobotModels(torsoName, torsoID, cost, price, torsoWeight) {}
	void setBattery(int battery);
	int getBattery();
	int getInfo();
};
#endif