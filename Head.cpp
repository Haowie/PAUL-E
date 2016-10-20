#include "RobotModels.h"
#include "Head.h"

Head::Head()
{}
double Head::getpower()
{
	return power;
}

void Head::setpower(int p)
{
	power = p;
}

int Head::getInfo()
{
	return getpower();
}