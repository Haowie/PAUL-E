#include "SalesAssoc.h"
#include "Customers.h"
#include "Order.h"

SalesAssoc::SalesAssoc()
{}

SalesAssoc::SalesAssoc(string name, int id)
{
	setEmpName(name);
	setEmpID(id);
}

int SalesAssoc::getEmpID()
{
	return empID;
}

string SalesAssoc::getEmpName()
{
	return empName;
}

void SalesAssoc::setEmpID(int ID)
{
	empID = ID;
}

void SalesAssoc::setEmpName(string name)
{
	empName = name;
}