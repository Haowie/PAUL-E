#include "Torso.h"

using namespace std;

Torso::Torso()
{}


int Torso::getBattery()
{
	return battery;
}

void Torso::setBattery(int numbattery)
{
	battery = numbattery;
}

int Torso::getInfo()
{
	return getBattery();
}
