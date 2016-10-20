#ifndef ORDER_H
#define ORDER_H

#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>
#include <string.h>
#include "RobotModels.h"
#include "Order.h"
#include "Shop.h"

using namespace std;

class RobotModels;
class Customers;
class SalesAssoc;
class Model;
class Shop;

class Order : public Shop
{
protected:
	SalesAssoc* employee1;
	Customers* customer1;
	Model* model1;
	int orderNum;
	double totalShipping;
	double withTax;
	string empName;
	string custName;
	int modelID;
public:
	Order();
	Order(int orderNum, int modelID, int empID, int custID, string custName, string empName);
	double shipping();
	double tax();
	double totalcost();
	void setOrderNum(int num);
	double getTotal();
	int getOrderNum();
	string getEmpName();
	string getCustName();
	int getmodelID();
};
#endif