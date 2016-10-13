#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>


#ifndef ROBOT_MODELS_H
#define ROBOT_MODELS_H

using namespace std;

class Customers;
class RobotParts;
class SalesAssoc;
enum Locale {SOLD, AVAILABLE};

class RobotModels
{
protected:
	int modelID;
	double cost;
	double price;
	string name;
	double weight;
	Locale location;

public:
	RobotModels();
	RobotModels(string name, int modelID, double cost, double price, double weight);
	Locale getLocation();
	void setLocation(Locale locate);
	
	//Gets and Sets
	virtual int getModelID();
	virtual double getCost();
	virtual double getPrice();
	virtual double getWeight();
	virtual string getName();
	void setModelID(int ID);
	void setCost(double c);
	void setPrice(double p);
	void setWeight(double w);
	void setName(string n);
};
#endif