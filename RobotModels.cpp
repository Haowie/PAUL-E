#include "RobotModels.h"
#include "Arm.h"
#include "Battery.h"
#include "Head.h"
#include "Torso.h"
#include "Locomotor.h"
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

void RobotModels::addBattery(Battery* battery)
{
	batteries.push_back(battery);
}

void RobotModels::addArm(Arm* a)
{
	arms.push_back(a);
}

void RobotModels::addHead(Head* h)
{
	heads.push_back(h);
}

void RobotModels::addLocomotive(Locomotor* loco)
{
	locomotors.push_back(loco);
}

void RobotModels::addTorso(Torso* t)
{
	torsos.push_back(t);
}

Battery* RobotModels::removeBattery(int l)
{
	int size = batteries.size();

	for (unsigned int index = 0; index < size; index++)
	{
		if ((batteries[index]->getModelID()) == l)
		{
			batteries.erase(batteries.begin() + index);
		}
	}
	return NULL;
}

Arm* RobotModels::removeArm(int a)
{
	int size = arms.size();

	for (unsigned int index = 0; index < size; index++)
	{
		if ((arms[index]->getModelID()) == a)
		{
			arms.erase(arms.begin() + index);
		}
	}
	return NULL;
}

Head* RobotModels::removeHead(int h)
{
	int size = heads.size();

	for (unsigned int index = 0; index < size; index++)
	{
		if ((heads[index]->getModelID()) == h)
		{
			heads.erase(heads.begin() + index);
		}
	}
	return NULL;
}

Locomotor* RobotModels::removeLocomotive(int b)
{
	int size = locomotors.size();

	for (unsigned int index = 0; index < size; index++)
	{
		if ((locomotors[index]->getModelID()) == b)
		{
			locomotors.erase(locomotors.begin() + index);
		}
	}
	return NULL;
}

Torso* RobotModels::removeTorso(int t)
{
	int size = torsos.size();
	
	for (unsigned int index = 0; index < size; index++)
	{
		if ((torsos[index]->getModelID()) == t)
		{
			torsos.erase(torsos.begin() + index);
		}
	}
	return NULL;
}

Arm* RobotModels::findArms(int armID)
{
	int size = arms.size();

	for (unsigned int index = 0; index < size; index++)
	{
		if ((arms[index]->getModelID()) == armID)
		{
			return arms[index];
		}
	}

	return NULL;
}

Battery* RobotModels::findBattery(int batID)
{
	int size = batteries.size();

	for (unsigned int index = 0; index < size; index++)
	{
		if ((batteries[index]->getModelID()) == batID)
		{
			return batteries[index];
		}
	}

	return NULL;
}

Head* RobotModels::findHead(int headID)
{
	int size = heads.size();

	for (unsigned int index = 0; index < size; index++)
	{
		if ((heads[index]->getModelID()) == headID)
		{
			return heads[index];
		}
	}

	return NULL;
}

Torso* RobotModels::findTorso(int torID)
{
	int size = torsos.size();

	for (unsigned int index = 0; index < size; index++)
	{
		if ((torsos[index]->getModelID()) == torID)
		{
			return torsos[index];
		}
	}

	return NULL;
}

Locomotor* RobotModels::findLocomotor(int locoID)
{
	int size = locomotors.size();

	for (unsigned int index = 0; index < size; index++)
	{
		if ((locomotors[index]->getModelID()) == locoID)
		{
			return locomotors[index];
		}
	}

	return NULL;
}

Arm* RobotModels::viewArms()
{
	int size = arms.size();
	cout << size;
	for (unsigned int index = 0; index < size; index++)
	{
		cout << "----------------------------------------" << endl;
		cout << " Name: " << arms[index]->getName() << endl;
		cout << " ID: " << arms[index]->getModelID() << endl;
		cout << " Cost: $" << arms[index]->getCost() << endl;
		cout << " Weight: " << arms[index]->getWeight() << " pounds " << endl;
		cout << " Power Consumed: " << arms[index]->getPower() << " watts " << endl;
		cout << "----------------------------------------" << endl;
	}
	return NULL;
}

Battery* RobotModels::viewBatteries()
{
	int size = batteries.size();

	for (unsigned int index = 0; index < size; index++)
	{
		cout << "----------------------------------------" << endl;
		cout << " Name: " << batteries[index]->getName() << endl;
		cout << " ID: " << batteries[index]->getModelID() << endl;
		cout << " Cost: $" << batteries[index]->getCost() << endl;
		cout << " Weight: " << batteries[index]->getWeight()<< " pounds "<< endl;
		cout << " Energy Contained: " << batteries[index]->getEnergy() << " KWH " << endl;
		cout << "----------------------------------------" << endl;
	}
	return NULL;
}

Head* RobotModels::viewHeads()
{
	int size = heads.size();

	for (unsigned int index = 0; index < size; index++)
	{
		cout << "----------------------------------------" << endl;
		cout << " Name: " << heads[index]->getName() << endl;
		cout << " ID: " << heads[index]->getModelID() << endl;
		cout << " Cost: $" << heads[index]->getCost() << endl;
		cout << " Weight: " << heads[index]->getWeight()<< " pounds "<< endl;
		cout << "----------------------------------------" << endl;
	}
	return NULL;
}

Torso* RobotModels::viewTorso()
{
	int size = torsos.size();

	for (unsigned int index = 0; index < size; index++)
	{
		cout << "----------------------------------------" << endl;
		cout << " Name: " << torsos[index]->getName() << endl;
		cout << " ID: " << torsos[index]->getModelID() << endl;
		cout << " Cost: $" << torsos[index]->getCost() << endl;
		cout << " Weight: " << torsos[index]->getWeight() <<" pounds " << endl;
		cout << " # of Batteries: " << torsos[index]->getBattery() << endl;
		cout << "----------------------------------------" << endl;
	}
	return NULL;
}

Locomotor* RobotModels::viewLoco()
{
	int size = locomotors.size();

	for (unsigned int index = 0; index < size; index++)
	{
		cout << "----------------------------------------" << endl;
		cout << " Name: " << locomotors[index]->getName() << endl;
		cout << " ID: " << locomotors[index]->getModelID() << endl;
		cout << " Cost: $" << locomotors[index]->getCost() << endl;
		cout << " Weight: " << locomotors[index]->getWeight() << " pounds " << endl;
		cout << " Power Consumed: " << locomotors[index]->getPowerConsumed()<<" watts " << endl;
		cout << " Speed: " << locomotors[index]->getMaxSpeed()<<" MPH "<< endl;
		cout << "----------------------------------------" << endl;
	}
	return NULL;
}

int RobotModels::getInfo()
{
	return 0;
}
