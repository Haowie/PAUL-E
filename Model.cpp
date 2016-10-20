#include "RobotModels.h"
#include "Model.h"
#include "Arm.h"
#include "Head.h"
#include "Torso.h"
#include "Locomotor.h"
#include "Battery.h"
#include <string>


Model::Model()
{}

Model::Model(string name, int ID, int tID, int aID, int hID, int lID, int bID)
{
	
	Arm* a = arm1->findArms(aID);
	Head* h = head1->findHead(hID);
	Torso* t = Torso1->findTorso(tID);
	Battery* b = battery1->findBattery(bID);
	Locomotor* l = loco1->findLocomotor(lID);

	 addArm(a);
	 addHead(h);
	 addTorso(t);
	 addBattery(b);
	 addLoco(l);
}

Model::Model(string name, int ID, int tID, int aID, int hID, int lID, int bID, int bID1)
{
	Arm* a = arm1->findArms(aID);
	Head* h = head1->findHead(hID);
	Torso* t = Torso1->findTorso(tID);
	Battery* b = battery1->findBattery(bID);
	Battery* b1 = battery1->findBattery(bID1);
	Locomotor* l = loco1->findLocomotor(lID);

	addArm(a);
	addHead(h);
	addTorso(t);
	addBattery(b);
	addBattery(b1);
	addLoco(l);
}

Model::Model(string name, int ID, int tID, int aID, int hID, int lID, int bID, int bID1, int bID2)
{
	Arm* a = arm1->findArms(aID);
	Head* h = head1->findHead(hID);
	Torso* t = Torso1->findTorso(tID);
	Battery* b = battery1->findBattery(bID);
	Battery* b1 = battery1->findBattery(bID1);
	Battery* b2 = battery1->findBattery(bID2);
	Locomotor* l = loco1->findLocomotor(lID);

	addArm(a);
	addHead(h);
	addTorso(t);
	addBattery(b);
	addBattery(b1);
	addBattery(b2);
	addLoco(l);
}


void Model::addArm(Arm* a)
{
	usedParts.push_back(a);
}

void Model::addHead(Head* h)
{
	usedParts.push_back(h);
}

void Model::addTorso(Torso* t)
{
	usedParts.push_back(t);
}

void Model::addBattery(Battery* b)
{
	usedParts.push_back(b);
}

void Model::addLoco(Locomotor* l)
{
	usedParts.push_back(l);
}

vector<RobotModels*> Model::getUsedParts()
{
	return usedParts;
}

int Model::getInfo()
{
	return getTotalWeight();
}

void Model::setTotalWeight(int tID, int aID, int hID, int lID, int bID)
{
	Torso* t = Torso1->findTorso(tID);
	Arm* a = arm1->findArms(aID);
	Head* h = head1->findHead(hID);
	Locomotor* l = loco1->findLocomotor(lID);
	Battery* b = battery1->findBattery(bID);

	totalWeight = (t->getWeight() + a->getWeight() + h->getWeight() + l->getWeight() + b->getWeight());
	
}

void Model::setTotalWeight1(int tID, int aID, int hID, int lID, int bID, int bID1)
{
	Torso* t = Torso1->findTorso(tID);
	Arm* a = arm1->findArms(aID);
	Head* h = head1->findHead(hID);
	Locomotor* l = loco1->findLocomotor(lID);
	Battery* b = battery1->findBattery(bID);
	Battery* b1 = battery1->findBattery(bID1);

	totalWeight1 = (t->getWeight() + a->getWeight() + h->getWeight() + l->getWeight() + b->getWeight() + b1->getWeight());
}

void Model::setTotalWeight2(int tID, int aID, int hID, int lID, int bID, int bID1, int bID2)
{
	Torso* t = Torso1->findTorso(tID);
	Arm* a = arm1->findArms(aID);
	Head* h = head1->findHead(hID);
	Locomotor* l = loco1->findLocomotor(lID);
	Battery* b = battery1->findBattery(bID);
	Battery* b1 = battery1->findBattery(bID1);
	Battery* b2 = battery1->findBattery(bID2);

	totalWeight2 = (t->getWeight() + a->getWeight() + h->getWeight() + l->getWeight() + b->getWeight() + b1->getWeight() + b2->getWeight());
}

double Model::getTotalWeight()
{
	return totalWeight;
}

double Model::getTotalWeight1()
{
	return totalWeight1;
}

double Model::getTotalWeight2()
{
	return totalWeight2;
}

void Model::setTotalCost(int aID, int hID, int lID, int bID)
{
	Torso* t = Torso1->findTorso(tID);
	Arm* a = arm1->findArms(aID);
	Head* h = head1->findHead(hID);
	Locomotor* l = loco1->findLocomotor(lID);
	Battery* b = battery1->findBattery(bID);

	totalcost = (t->getCost() + a->getCost() + h->getCost() + l->getCost() + b->getCost());
	
}

void Model::setTotalCost1(int aID, int hID, int lID, int bID, int bID1)
{
	Torso* t = Torso1->findTorso(tID);
	Arm* a = arm1->findArms(aID);
	Head* h = head1->findHead(hID);
	Locomotor* l = loco1->findLocomotor(lID);
	Battery* b = battery1->findBattery(bID);
	Battery* b1 = battery1->findBattery(bID1);

	totalcost = (t->getCost() + a->getCost() + h->getCost() + l->getCost() + b->getCost() + b1->getCost());
}


void Model::setTotalCost2(int aID, int hID, int lID, int bID, int bID1, int bID2)
{
	Torso* t = Torso1->findTorso(tID);
	Arm* a = arm1->findArms(aID);
	Head* h = head1->findHead(hID);
	Locomotor* l = loco1->findLocomotor(lID);
	Battery* b = battery1->findBattery(bID);
	Battery* b1 = battery1->findBattery(bID1);
	Battery* b2 = battery1->findBattery(bID2);

	totalcost = (t->getCost() + a->getCost() + h->getCost() + l->getCost() + b->getCost() + b1->getCost() + b2->getCost());
}

double Model::getTotalCost()
{
	return totalcost;
}

double Model::getTotalCost1()
{
	return totalcost1;
}

double Model::getTotalCost2()
{
	return totalcost2;
}

void Model::setTotalPrice(int aID, int hID, int lID, int bID)
{
	Torso* t = Torso1->findTorso(tID);
	Arm* a = arm1->findArms(aID);
	Head* h = head1->findHead(hID);
	Locomotor* l = loco1->findLocomotor(lID);
	Battery* b = battery1->findBattery(bID);

	totalPrice = (t->getPrice() + a->getPrice() + h->getPrice() + l->getPrice() + b->getPrice());
}

void Model::setTotalPrice1(int aID, int hID, int lID, int bID, int bID1)
{
	Torso* t = Torso1->findTorso(tID);
	Arm* a = arm1->findArms(aID);
	Head* h = head1->findHead(hID);
	Locomotor* l = loco1->findLocomotor(lID);
	Battery* b = battery1->findBattery(bID);
	Battery* b1 = battery1->findBattery(bID1);

	totalPrice = (t->getPrice() + a->getPrice() + h->getPrice() + l->getPrice() + b->getPrice() + b1->getPrice());
}

void Model::setTotalPrice2(int aID, int hID, int lID, int bID, int bID1, int bID2)
{
	Torso* t = Torso1->findTorso(tID);
	Arm* a = arm1->findArms(aID);
	Head* h = head1->findHead(hID);
	Locomotor* l = loco1->findLocomotor(lID);
	Battery* b = battery1->findBattery(bID);
	Battery* b1 = battery1->findBattery(bID1);
	Battery* b2 = battery1->findBattery(bID2);

	totalPrice = (t->getPrice() + a->getPrice() + h->getPrice() + l->getPrice() + b->getPrice() + b1->getPrice() + b2->getPrice());
}

double Model::getTotalPrice()
{
	return totalPrice;
}

double Model::getTotalPrice1()
{
	return totalPrice1;
}

double Model::getTotalPrice2()
{
	return totalPrice2;
}