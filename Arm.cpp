#include "RobotModels.h"
#include "Arm.h"
Arm::Arm()
{}

void Arm::setPower(int power)
{
	powerConsumed = power;
}

double Arm::getPower()
{
	return powerConsumed;
}

int Arm::getInfo()
{
	return getPower();
}