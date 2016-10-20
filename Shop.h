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
class Model;

class Shop
{
public:
	Shop();
	void addModel(Model* ID);
	void addOrder(Order* orderID);
	void addCustomer(Customers* id);
	void addSalesAssoc(SalesAssoc* empID);
	void addBoss(Boss* bossName);
	Boss* checkBoss(int bossID);
	Model* viewModels();
	Order* viewOrder(int orderNum);
	Customers* findCustomer(int ID);
	Customers* viewCustomers();
	SalesAssoc* viewEmployees();
	SalesAssoc* findEmployee(int empID);
	Model* findModel(int modID);
	Order* findOrder(int orderNum);

protected:
	vector<SalesAssoc*> employee;
	vector<Customers*> customer;
	vector<Model*> model;
	vector<Boss*> boss;
	vector<Order*> order;
};
#endif