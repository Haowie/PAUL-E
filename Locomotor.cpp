#include "RobotModels.h"
#include "Locomotor.h"

Locomotor::Locomotor()
{}

double Locomotor::getMaxSpeed()
{
	return maxSpeed;
}

double Locomotor::getPowerConsumed()
{
	return powerConsumed;
}

void Locomotor::setMaxSpeed(double speed)
{
	maxSpeed = speed;
}

void Locomotor::setPowerConsumed(double power)
{
	powerConsumed = power;
}

int Locomotor::getInfo()
{
	return getPowerConsumed(), getMaxSpeed();
}

