#include "RobotModels.h"
#include "Battery.h"
#include <iostream>
#include <string>


Battery::Battery()
{}

void Battery::setEnergy(double energy)
{
	energyContained = energy;
}

double Battery::getEnergy()
{
	return energyContained;
}

int Battery::getInfo()
{
	return getEnergy();
}
