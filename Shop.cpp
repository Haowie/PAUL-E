#include "Shop.h"
#include "RobotModels.h"
#include "Customers.h"
#include "SalesAssoc.h"
#include "Boss.h"
#include "Model.h"
#include <cstdlib>
#include <iostream>
#include <iomanip>

using namespace std;

Shop::Shop()
{}

Model* Shop::viewModels()
{
	int size = model.size();

	for (unsigned int index = 0; index < size; index++)
	{
		cout << "----------------------------------------" << endl;
		cout << " Name: " << model[index]->getName() << " ' " << endl;
		cout << " ID: " << model[index]->getModelID() << " ' " << endl;
		cout << " Price: $" << model[index]->getPrice() << " ' " << endl;
		cout << " Weight: " << model[index]->getWeight() << " pound " << endl;
		cout << " Location: " << model[index]->getLocation() << endl;
		cout << "----------------------------------------" << endl;
	}
	return 0;
}

Order* Shop::viewOrder(int orderNum)
{
	int size = order.size();
	
	for (unsigned int index = 0; index < size; index++)
	{
		if ((order[index]->getOrderNum()) == orderNum)
		{
			cout << "----------------------------------------" << endl;
			cout << " Customer Name: " << order[index]->getCustName() << endl;
			cout << " Model Bought: " << order[index]->getmodelID() << endl;
			cout << " Sales Clerk: " << order[index]->getEmpName() << endl;
			cout << " Total: $" << order[index]->getTotal() << endl;
			cout << "----------------------------------------" << endl;
		}
	}
	return NULL;
}

SalesAssoc* Shop::viewEmployees()
{
	int size = employee.size();

	for (unsigned int index = 0; index < size; index++)
	{
		cout << "----------------------------------------" << endl;
		cout << " Employee Name: " << employee[index]->getEmpName() << endl;
		cout << " Employee ID: " << employee[index]->getEmpID() << endl;
		cout << "----------------------------------------" << endl;
	}
	return 0;
}

Customers* Shop::viewCustomers()
{
	int size = customer.size();
	
	for (unsigned int index = 0; index < size; index++)
	{
		cout << "----------------------------------------" << endl;
		cout << " Customer Name: " << customer[index]->getCustomerName() << endl;
		cout << " Customer ID: " << customer[index]->getID() << endl;
		cout << "----------------------------------------" << endl;
	}
	return 0;
}

Customers* Shop::findCustomer(int ID)
{
	int size = customer.size();

	for (unsigned int index = 0; index < size; index++)
	{
		if ((customer[index]->getID()) == ID)
		{
			return customer[index];
		}
	}

	return NULL;
}

SalesAssoc* Shop::findEmployee(int empID)
{
	int size = employee.size();

	for (unsigned int index = 0; index < size; index++)
	{
		if ((employee[index]->getEmpID()) == empID)
		{
			return employee[index];
		}
	}

	return NULL;
}

Order* Shop::findOrder(int num)
{
	int size = order.size();

	for (unsigned int index = 0; index < size; index++)
	{
		if ((order[index]->getOrderNum()) == num)
		{
			return order[index];
		}
	}
	return NULL;
}
Model* Shop::findModel(int modID)
{
	int size = model.size();

	for (unsigned int index = 0; index < size; index++)
	{
		if ((model[index]->getModelID()) == modID)
		{
			return model[index];
		}
	}
	return NULL;
}
Boss* Shop::checkBoss(int bossID)
{
	int size = boss.size();
	unsigned int index = 0;

	for (index; index < size; index++)
	{
		if ((boss[index])->getBossID() == bossID)
		{
			return boss[index];
		}
	}
	return NULL;
}

void Shop::addCustomer(Customers* id)
{
	customer.push_back(id);
}

void Shop::addSalesAssoc(SalesAssoc* empID)
{
	employee.push_back(empID);
}

void Shop::addOrder(Order* orderID)
{
	order.push_back(orderID);
}

void Shop::addBoss(Boss* bossID)
{
	int size = boss.size();
	if (size >= 1)
	{
		cout << "Error, can only have 1 boss." << endl;
	}
	else
	{
		boss.push_back(bossID);
	}
}

void Shop::addModel(Model* ID)
{
	model.push_back(ID);
	
}

