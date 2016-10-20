#ifndef BOSS_H
#define BOSS_H

#include "Order.h"
#include "SalesAssoc.h"
#include "Shop.h"
#include "RobotModels.h"
#include <string>

using namespace std;

class Order;
class Customer;
class RobotModels;

class Boss
{
protected:
	string bossName;
	int bossID;
public:
	Boss();
	Boss(string name, int  ID);
	void setBossName(string name);
	void setBossID(int ID);
	string getBossName();
	int getBossID();
};
#endif