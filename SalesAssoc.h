#ifndef SALES_ASSOC_H
#define SALES_ASSOC_H

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include "RobotModels.h"
#include "Order.h"
#include "Shop.h"

using namespace std;

class Customer;
class RobotModels;
class Order;
class Shop;

class SalesAssoc : public Shop
{
protected:
	string empName;
	int empID;
public:
	SalesAssoc();
	SalesAssoc(string name, int ID);
	string getEmpName();
	void setEmpName(string name);
	int getEmpID();
	void setEmpID(int ID);


};

#endif