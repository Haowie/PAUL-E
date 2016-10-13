#include "RobotModels.h"
using namespace std;

RobotModels::RobotModels()
{
	setLocation(AVAILABLE);
}



RobotModels::RobotModels(string name, int modelID, double cost, double price, double weight)
{
	setName(name);
	setModelID(modelID);
	setCost(cost);
	setPrice(price);
	setWeight(weight);
}

string RobotModels::getName()
{
	return name;
}

int RobotModels::getModelID()
{
	return modelID;
}

double RobotModels::getCost()
{
	return cost;
}

double RobotModels::getPrice()
{
	return price;
}

double RobotModels::getWeight()
{
	return weight;
}

void RobotModels::setName(string n)
{
	name = n;
}

void RobotModels::setModelID(int ID)
{
	modelID = ID;
}

void RobotModels::setCost(double c)
{
	cost = c;
}

void RobotModels::setPrice(double p)
{
	price = p;
}

void RobotModels::setWeight(double w)
{
	weight = w;
}

Locale RobotModels::getLocation()
{
	return location;
}

void RobotModels::setLocation(Locale locate)
{
	location = locate;
}
