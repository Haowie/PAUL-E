#include<iostream>
#include<string>
#include<vector>
#include<stdlib.h>

#ifndef MODEL_H
#define MODEL_H

using namespace std;

class RobotModels;
class Head;
class Arm;
class Torso;
class Battery;
class Locomotor;

class Model : public RobotModels
{
public:
	string name;
	int ID;
	double totalWeight;
	double totalWeight1;
	double totalWeight2;
	double speed;
	double powerUsed;
	int numofBat;
	double totalcost;
	double totalcost1;
	double totalcost2;
	double totalPrice;
	double totalPrice1;
	double totalPrice2;
	int energy;
	int tID;
	int aID;
	int hID;
	int lID;
	int bID, bID1, bID2;
	vector<RobotModels*> usedParts;
	Arm* arm1;
	Head* head1;
	Torso* Torso1;
	Battery* battery1;
	Locomotor* loco1;
	
	Model();
	Model(string name, int ID, int tID, int aID, int hID, int lID, int bID);
	Model(string name, int ID, int tID, int aID, int hID, int lID, int bID, int bID1);
	Model(string name, int ID, int tID, int aID, int hID, int lID, int bID, int bID1, int bID2);
	vector<RobotModels*> getUsedParts();
	void addArm(Arm* a);
	void addHead(Head* h);
	void addTorso(Torso* t);
	void addBattery(Battery* b);
	void addLoco(Locomotor* l);
	int getInfo();
	void setTotalWeight(int tID, int aID, int hID, int lID, int bID);
	void setTotalWeight1(int tID, int aID, int hID, int lID, int bID, int bID1);
	void setTotalWeight2(int tID, int aID, int hID, int lID, int bID, int bID1, int bID2);
	double getTotalWeight();
	double getTotalWeight1();
	double getTotalWeight2();
	void setTotalCost(int aID, int hID, int lID, int bID);
	void setTotalCost1(int aID, int hID, int lID, int bID, int bID1);
	void setTotalCost2(int aID, int hID, int lID, int bID, int bID1, int bID2);
	double getTotalCost();
	double getTotalCost1();
	double getTotalCost2();
	void setTotalPrice(int aID, int hID, int lID, int bID);
	void setTotalPrice1(int aID, int hID, int lID, int bID, int bID1);
	void setTotalPrice2(int aID, int hID, int lID, int bID, int bID1, int bID2);
	double getTotalPrice();
	double getTotalPrice1();
	double getTotalPrice2();
};
#endif