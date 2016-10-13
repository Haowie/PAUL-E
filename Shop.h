#include <iostream>
#include <string>
#include <vector>

using namespace std;

#ifndef SHOP_H
#define SHOP_H

class Order;
class RobotModels;
class SalesAssoc;
class Boss;
class Customers;

class Shop
{
public:
	Shop();
	void addModel(RobotModels* item);
	void addCustomer(Customers* name);
	void addBoss(Boss* bossName);
	RobotModels* viewModels(int modelID);
	Customers* findCustomer(int ID);

protected:
	vector<SalesAssoc*> employee;
	vector<Customers*> customer;
	vector<RobotModels*> model;
	vector<Boss*> boss;
};
#endif