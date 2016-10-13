#include "Customers.h"
#include "Order.h"

using namespace std;

Customers::Customers()
{
	setCustomerName("");
}

Customers::Customers(string n, int id)
{
	setCustomerName(n);
	setID(id);
}

string Customers::getCustomerName()
{
	return name;
}

void Customers::setCustomerName(string n)
{
	name = n;
}

int Customers::getID()
{
	return ID;
}

void Customers::setID(int i)
{
	ID = i;
}