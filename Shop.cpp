#include "Shop.h"
#include "RobotModels.h"
#include "Customers.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

Shop::Shop()
{}

RobotModels* Shop::viewModels(int modelID)
{
	int size = model.size();

	for (unsigned int index = 0; index < size; index++)
	{
		if ((model[index]->getModelID() == modelID))
		{
			return model[index];
		}
	}

	return NULL;
}

Customers* Shop::findCustomer(int ID)
{
	int size = customer.size();

	for (unsigned int index = 0; index < size; index++)
	{
		if ((customer[index])->getID() == ID)
		{
			return customer[index];
		}
	}

	return NULL;
}

void Shop::addModel(RobotModels* item)
{
	model.push_back(item);
}

void Shop::addCustomer(Customers* name)
{
	customer.push_back(name);
}

