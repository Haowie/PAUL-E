#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include "RobotModels.h"
#include "Order.h"

#ifndef CUSTOMERS_H
#define CUSTOMERS_H

using namespace std;

class RobotModels;
class Order;
class SalesAssoc;

//Add more class as needed

class Customers
{
protected:
	string name;
	int ID;
	vector<RobotModels*> boughtItems;
	double totalcost;
public:
	Customers();
	Customers(string n, int ID);
	string getCustomerName();
	void setCustomerName(string n);
	double totalCost();
	int getID();
	void setID(int ID);

};
#endif