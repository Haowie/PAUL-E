#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>


#ifndef ROBOT_MODELS_H
#define ROBOT_MODELS_H

using namespace std;

class Customers;
class SalesAssoc;
class Torso;
class Locomotor;
class Head;
class Arm;
class Battery;
class Model;


enum Locale {SOLD, AVAILABLE};

class RobotModels
{
private:
	int modelID;
	double cost;
	double price;
	string name;
	double weight;
	Locale location;
	vector<Torso*> torsos;
	vector<Locomotor*> locomotors;
	vector<Head*> heads;
	vector<Arm*> arms;
	vector<Battery*> batteries;
	double energy;
	double speed;
	double power;
	int bat;

public:
	RobotModels();
	RobotModels(string name, int modelID, double cost, double price, double weight);
	Locale getLocation();
	void setLocation(Locale locate);
	
	//Gets and Sets
	int getModelID();
	double getCost();
	double getPrice();
	double getWeight();
	string getName();
	
	//Setters
	void setName(string n);
	void setModelID(int ID);
	void setCost(double c); //total cost, change later
	void setPrice(double p	); 
	void setWeight(double w); //total weight, change later

	//Sets and gets for Parts
	void addBattery(Battery* battery);
	void addLocomotive(Locomotor* locomotive);
	void addHead(Head* heads);
	void addArm(Arm* arms);
	void addTorso(Torso* torsos);
	
	//Removing parts
	Battery* removeBattery(int l);
	Locomotor* removeLocomotive(int b);
	Head* removeHead(int h);
	Arm* removeArm(int a);
	Torso* removeTorso(int t);
	
	//Checking for parts
	Arm* findArms(int armID);
	Battery* findBattery(int batID);
	Head* findHead(int headID);
	Torso* findTorso(int torID);
	Locomotor* findLocomotor(int locoID);

	//Browsing parts
	Arm* viewArms();
	Battery* viewBatteries();
	Head* viewHeads();
	Torso* viewTorso();
	Locomotor* viewLoco();

	virtual int getInfo();

};
#endif