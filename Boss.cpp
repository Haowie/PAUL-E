#include "Shop.h"
#include "Boss.h"
#include "SalesAssoc.h"
#include "Customers.h"
#include "RobotModels.h"

Boss::Boss()
{}

Boss::Boss(string name, int ID)
{
	setBossName(name);
	setBossID(ID);
}

void Boss::setBossID(int ID)
{
	bossID = ID;
}

void Boss::setBossName(string name)
{
	bossName = name;
}

int
Boss::getBossID()
{
	return bossID;
}

string Boss::getBossName()
{
	return bossName;
}