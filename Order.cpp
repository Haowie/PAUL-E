#include "Shop.h"
#include "SalesAssoc.h"
#include "Order.h"
#include "RobotModels.h"
#include "Customers.h"
#include "Model.h"


using namespace std;


Order::Order()
{}

Order::Order(int orderNum, int modelID, int empID, int custID, string custName, string empName)
{
	SalesAssoc* emp1 = findEmployee(empID);
	empName = emp1->getEmpName();
	Customers* cust1 = findCustomer(custID);
	custName = cust1->getCustomerName();
	Model* mod1 = findModel(modelID);
	modelID = mod1->getModelID();
	setOrderNum(orderNum);
}

double Order::shipping()
{
	return totalShipping = model1->getPrice() + 10;
}

double Order::tax()
{
	return withTax = model1->getPrice()* .0825;
}

double Order::totalcost()
{
	double total = shipping() + tax();

	return total;
}

double Order::getTotal()
{
	return totalcost();
}

void Order::setOrderNum(int num)
{
	orderNum = num;
}

int Order::getOrderNum()
{
	return orderNum;
}

string Order::getCustName()
{
	return custName;
}

string Order::getEmpName()
{
	return empName;
}

int Order::getmodelID()
{
	return modelID;
}