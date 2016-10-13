#ifndef SALES_ASSOC_H
#define SALES_ASSOC_H

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include "RobotModels.h"

using namespace std;

class Customer;
class RobotModels;
class Order;

class SalesAssoc
{
protected:
	string empName;
	int empID;
	double totalSales;
public:
	SalesAssoc();
	SalesAssoc(string name, int ID);
	string getEmpName();
	void setEmpName(string name);
	int getEmpID();
	void setEmpID(int ID);

};

#endif