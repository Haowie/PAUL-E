#include <iostream>
#include <vector>
#include <string.h>
#include <stdlib.h>

#include "Customers.h"
#include "RobotModels.h"
#include "Shop.h"
#include "SalesAssoc.h"
#include "Order.h"
#include "Boss.h"
#include "Arm.h"
#include "Locomotor.h"
#include "Head.h"
#include "Torso.h"
#include "Battery.h"
#include "Model.h"

using namespace std;


int main()
{
	
	Shop simulation;
	Model model1;
	Torso torso1;
	Arm arms1;
	Head head1;
	Locomotor loco1;
	Battery battery1;
	RobotModels robot;

	int input = 0;
	
	cout << "PAUL-E's Menu" << endl;
	cout << "-------------" << endl;
	cout << "1) Create " << endl;
	cout << "2) Report " << endl;
	cout << "3) Buy " << endl;
	cout << "4) Quit " << endl << endl;
	cout << "Choice: ";
	cin >> input;
	
	cout << "-------------------------------------------" << endl;

	
	while (input != 3)
	{
		if (input == 1)
		{
			int input2;
			cout << "1.1) Create Customer " << endl;
			cout << "1.2) Create Sales Associate " << endl;
			cout << "1.3) Create Boss " << endl;
			cout << "1.4) Create Robot Model" << endl;
			cout << "1.5) Create Robot Component" << endl;
			cout << "1.6) Return to Main " << endl;
			cout << "Input 1-6. (NOT 1.#)" << endl;
			cout << "Choice: ";
			cin >> input2;

			cout << "-------------------------------------------" << endl;

			while (input2 != 6)
			{

				if (input2 == 1) //Create a new customer
				{
					string name;
					int ID;

					cout << "Enter name: ";
					cin.ignore();
					getline(cin, name);
					cout << "Enter ID (Can be Phone number)" << endl;
					cin.ignore();
					cin >> ID;

					Customers* check = simulation.findCustomer(ID);
					if (check != NULL)
					{
						cout << "That customer already exists." << endl;
					}
					else
					{
						Customers *customer;
						customer = new Customers(name, ID);

						simulation.addCustomer(customer);
						cout << endl << "Customer has successfully been added." << endl;
					}

					cout << "-------------------------------------------" << endl;


					break;


				}
				else if (input2 == 2) //Create Sales Associate;
				{
					string empname;
					int empID;

					cout << "Enter name: ";
					cin.ignore();
					getline(cin, empname);
					cout << "Enter employee ID: " << endl;
					cin.ignore();
					cin >> empID;

					SalesAssoc* check = simulation.findEmployee(empID);
					if (check != NULL)
					{
						cout << "The following employee already works here." << endl;
					}
					else
					{
						SalesAssoc* employee;
						employee = new SalesAssoc(empname, empID);

						simulation.addSalesAssoc(employee);
						cout << endl << "The following employee has successfully been hired." << endl;
					}

					cout << "-------------------------------------------" << endl;

					break;
				}
				else if (input2 == 3) // Create new boss
				{
					string bossName;
					int bossID;

					cout << "Enter name: ";
					cin.ignore();
					getline(cin, bossName);
					cout << "Enter boss ID: " << endl;
					cin >> bossID;

					Boss* check = simulation.checkBoss(bossID);
					if (check != NULL)
					{
						cout << "The following employee already works here." << endl;
					}
					else
					{
						Boss* boss;
						boss = new Boss(bossName, bossID);

						simulation.addBoss(boss);
						cout << endl << "The following employee has been sucessfully hired." << endl;
					}

					cout << "-------------------------------------------" << endl;

					break;
				}
				else if (input2 == 4)
				{
					string mName;
					int mID;
					double mCost;
					double mCost1;
					double mCost2;
					double mPrice;
					double mPrice1;
					double mPrice2;
					double mWeight;
					double mWeight1;
					double mWeight2;
					int armid;
					int headid;
					int torsoid;
					int locoid;
					int batid;
					int bat1id;
					int bat2id;
					int numofbat;

					cout << "What is the name of the model? ";
					cin.ignore();
					getline(cin, mName);
					cout << "What is the model ID? " << endl;
					cin >> mID;
					Model* checkmID = simulation.findModel(mID);
					while (checkmID != NULL)
					{
						cout << "This model ID already existed, please enter another:" << endl;
						cout << "Choice: ";
						cin >> mID;
					}
					cout << "Enter ID for of desired arms: " << endl;
					robot.viewArms();
					cout << "Choice: ";
					cin >> armid;
					RobotModels* checkA = robot.findArms(armid);
					while (checkA == NULL) {
						cout << "This item does not exist. " << endl;
						cout << "Please enter valid ID: ";
						cin >> armid;
						checkA = robot.findArms(armid);
					}

					cout << "Enter ID for of desired head: " << endl;
					robot.viewHeads();
					cout << "Choice: ";
					cin >> headid;
					RobotModels* checkH = robot.findHead(headid);
					while (checkH == NULL) {
						cout << "This item does not exist. " << endl;
						cout << "Please enter valid ID: ";
						cin >> headid;
						checkH = robot.findHead(headid);
					}

					cout << "Enter ID for of desired torso: " << endl;
					robot.viewTorso();
					cout << "Choice: ";
					cin >> torsoid;
					RobotModels* checkT = robot.findTorso(torsoid);
					while (checkT == NULL) {
						cout << "This item does not exist. " << endl;
						cout << "Please enter valid ID: ";
						cin >> torsoid;
						checkT = robot.findTorso(torsoid);
					}
					cout << endl << "Enter ID for of desired locomotor: " << endl;
					robot.viewLoco();
					cout << "Choice: ";
					cin >> locoid;
					RobotModels* checkL = robot.findLocomotor(locoid);
					while (checkL == NULL) {
						cout << "This item does not exist. " << endl;
						cout << "Please enter valid ID: ";
						cin >> locoid;
						checkL = robot.findLocomotor(locoid);
					}
					numofbat = torso1.getInfo();

					if (numofbat == 1)
					{
						cout << "Enter ID of 1st battery for the torso: " << endl;
						robot.viewBatteries();
						cout << "Choice: ";
						cin >> batid;
						RobotModels* checkBat = robot.findBattery(batid);
						while (checkBat == NULL) {
							cout << "This item does not exist. " << endl;
							cout << "Please er valid ID: ";
							cin >> batid;
							checkBat = robot.findBattery(batid);
						}
						cout << "Battery ID " << batid << "has been chosen." << endl;
						Model* newModel;
						newModel = new Model(mName, mID, armid, headid, locoid, torsoid, batid);
						mWeight = newModel->getTotalWeight();
						simulation.addModel(newModel);
					}

					else if (numofbat == 2)
					{
						cout << "Enter ID of 1st battery for the torso: " << endl;
						robot.viewBatteries();
						cout << "Choice: ";
						cin >> batid;
						RobotModels* checkBat = robot.findBattery(batid);
						while (checkBat == NULL) {
							cout << "This item does not exist. " << endl;
							cout << "Please enter valid ID: ";
							cin >> batid;
							checkBat = robot.findBattery(batid);
						}
						cout << "Battery ID " << batid << " has been chosen." << endl;
						cout << "Please choose a different second battery. " << endl;
						cout << "Enter ID of 2nd battery for the torso: " << endl;
						robot.viewBatteries();
						cout << "Choice: ";
						cin >> bat1id;
						while (bat1id = batid)
						{
							cout << "Please choose a part that hasn't been already picked." << endl;
							cin >> bat1id;
						}
						RobotModels* checkBat1 = robot.findBattery(bat1id);
						while (checkBat1 == NULL) {
							cout << "This item does not exist. " << endl;
							cout << "Please enter valid ID: ";
							cin >> bat1id;
							checkBat1 = robot.findBattery(bat1id);
						}

						Model* newModel1;
						newModel1 = new Model(mName, mID, armid, headid, locoid, torsoid, batid, bat1id);
						mWeight1 = newModel1->getTotalWeight1();
						simulation.addModel(newModel1);
					}

					else
					{
						cout << "Enter ID of 1st battery for the torso: " << endl;
						robot.viewBatteries();
						cout << "Choice: ";
						cin >> batid;
						RobotModels* checkBat = robot.findBattery(batid);
						while (checkBat == NULL) {
							cout << "This item does not exist. " << endl;
							cout << "Please enter valid ID: ";
							cin >> batid;
						}
						cout << "Battery ID " << batid << "has been chosen." << endl;
						cout << "Please choose a different second battery. " << endl;
						cout << "Entire ID of 2nd battery for the torso: " << endl;
						robot.viewBatteries();
						cout << "Choice: ";
						cin >> bat1id;
						while (bat1id = batid)
						{
							cout << "Please choose a part that hasn't been already picked." << endl;
							cin >> bat1id;
						}
						RobotModels* checkBat1 = robot.findBattery(bat1id);
						while (checkBat1 == NULL) {
							cout << "This item does not exist. " << endl;
							cout << "Please enter valid ID: ";
							cin >> bat1id;
							checkBat1 = robot.findBattery(bat1id);
						}
						cout << "Battery ID " << batid << "has been chosen." << endl;
						cout << "Please choose a different third battery. " << endl;
						cout << "Entire ID of 3rd battery for the torso: " << endl;
						robot.viewBatteries();
						cout << "Choice: ";
						cin >> bat2id;
						while ((bat2id = batid) || (bat2id = bat1id))
						{
							cout << "Please choose a part that hasn't been already picked." << endl;
							cin >> bat2id;
						}
						RobotModels* checkBat2 = robot.findBattery(bat2id);
						while (checkBat2 == NULL) {
							cout << "This item does not exist. " << endl;
							cout << "Please enter valid ID: ";
							cin >> bat2id;
							checkBat2 = robot.findBattery(bat2id);
						}

						Model* newModel2;
						newModel2 = new Model(mName, mID, armid, headid, locoid, torsoid, batid, bat1id, bat2id);
						mWeight2 = newModel2->getTotalWeight2();
						simulation.addModel(newModel2);
					}

					cout << "-------------------------------------------" << endl;
					break;

				}

				else if (input2 == 5)
				{
					//Create components here, make another menu for type of components (Arms, Head, Torso, Battery, Locomotive)
					int inputC;
					cout << "1) Create Arms " << endl;
					cout << "2) Create Batteries " << endl;
					cout << "3) Create Head " << endl;
					cout << "4) Create Locomotive " << endl;
					cout << "5) Create Torso" << endl;
					cout << "6) Return to Main Menu" << endl;
					cout << "Choice: ";
					cin >> inputC;

					cout << "-------------------------------------------" << endl;

					if (inputC == 1)
					{
						string armname;
						int armID;
						double armPower;
						double armCost;
						double armPrice;
						double armWeight;

						cout << "Enter arm name: " << endl;
						cin.ignore();
						getline(cin, armname);
						cout << "Enter model ID: " << endl;
						cin >> armID;
						cout << "Enter power consumed: " << endl;
						cin >> armPower;
						cout << "Enter cost to produce: " << endl;
						cin >> armCost;
						cout << "Enter price to sell for: " << endl;
						cin >> armPrice;
						cout << "Enter the weight of product: " << endl;
						cin >> armWeight;

						RobotModels* check = robot.findArms(armID);
						if (check != NULL)
						{
							cout << endl << "That item is already created. " << endl;
						}
						else
						{
							Arm* newArms;
							newArms = new Arm(armname, armID, armCost, armPrice, armWeight);
							newArms->setPower(armPower);

							robot.addArm(newArms);
							model1.addArm(newArms);
							cout << endl << "The product has been made and added." << endl;
						}


						cin.ignore();
					}

					else if (inputC == 2)
					{
						string batname;
						int batID;
						double batEnergy;
						double batCost;
						double batPrice;
						double batWeight;

						cout << "Enter name: " << endl;
						cin.ignore();
						getline(cin, batname);
						cout << "Enter model ID: " << endl;
						cin >> batID;
						cout << "Enter energy contained: " << endl;
						cin >> batEnergy;
						cout << "Enter cost to produce: " << endl;
						cin >> batCost;
						cout << "Enter price to sell for: " << endl;
						cin >> batPrice;
						cout << "Enter the weight of product: " << endl;
						cin >> batWeight;

						RobotModels* check = robot.findBattery(batID);

						if (check != NULL)
						{
							cout << endl << "That item is already created. " << endl;
						}
						else
						{
							Battery* newBat;
							newBat = new Battery(batname, batID, batCost, batPrice, batWeight);
							newBat->setEnergy(batEnergy);

							robot.addBattery(newBat);
							model1.addBattery(newBat);
							cout << endl << "The product has been made and added." << endl;
						}

						cin.ignore();
					}

					else if (inputC == 3)
					{
						string headname;
						int headID;
						double headCost;
						double headPrice;
						double headWeight;

						cout << "Enter head name: " << endl;
						cin.ignore();
						getline(cin, headname);
						cout << "Enter model ID: " << endl;
						cin >> headID;
						cout << "Enter cost to produce: " << endl;
						cin >> headCost;
						cout << "Enter price to sell for: " << endl;
						cin >> headPrice;
						cout << "Enter the weight of product: " << endl;
						cin >> headWeight;

						RobotModels* check = robot.findHead(headID);
						if (check != NULL)
						{
							cout << endl << "That item is already created. " << endl;
						}
						else
						{
							Head* newHead;
							newHead = new Head(headname, headID, headCost, headPrice, headWeight);

							robot.addHead(newHead);
							model1.addHead(newHead);
							cout << endl << "The product has been made and added." << endl;
						}

						cin.ignore();
					}

					else if (inputC == 4)
					{
						string lname;
						int lID;
						double lPower;
						double lCost;
						double lPrice;
						double lWeight;
						double lmaxSpeed;

						cout << "Enter locomotor's name: " << endl;
						cin.ignore();
						getline(cin, lname);
						cout << "Enter model ID: " << endl;
						cin >> lID;
						cout << "Enter power consumed: " << endl;
						cin >> lPower;
						cout << "Enter cost to produce: " << endl;
						cin >> lCost;
						cout << "Enter price to sell for: " << endl;
						cin >> lPrice;
						cout << "Enter the weight of product: " << endl;
						cin >> lWeight;
						cout << "Enter max speed of locomotor: " << endl;
						cin >> lmaxSpeed;

						RobotModels* check = robot.findLocomotor(lID);
						if (check != NULL)
						{
							cout << endl << "That item is already created. " << endl;
						}
						else
						{
							Locomotor* newLocomotive;
							newLocomotive = new Locomotor(lname, lID, lCost, lPrice, lWeight);
							newLocomotive->setMaxSpeed(lmaxSpeed);
							newLocomotive->setPowerConsumed(lPower);

							robot.addLocomotive(newLocomotive);
							model1.addLocomotive(newLocomotive);
							cout << endl << "The product has been made and added." << endl;
						}

						cin.ignore();
					}

					else if (inputC == 5)
					{
						string tname;
						int tID;
						double tPower;
						double tCost;
						double tPrice;
						double tWeight;
						int numofBat;

						cout << "Enter torso name: " << endl;
						cin.ignore();
						getline(cin, tname);
						cout << "Enter model ID: " << endl;
						cin >> tID;
						cout << "Enter power consumed: " << endl;
						cin >> tPower;
						cout << "Enter cost to produce: " << endl;
						cin >> tCost;
						cout << "Enter price to sell for: " << endl;
						cin >> tPrice;
						cout << "Enter the weight of product: " << endl;
						cin >> tWeight;
						cout << "Enter the number of batteries (1-3): " << endl;
						cin >> numofBat;

						while ((numofBat < 1) || (numofBat > 3))
						{
							cout << "Please enter between 1 to 3 batteries." << endl;
							cin >> numofBat;
						}

						RobotModels* check = robot.findTorso(tID);

						if (check != NULL)
						{
							cout << endl << "That item is already created. " << endl;
						}
						else
						{
							Torso* newTorso;
							newTorso = new Torso(tname, tID, tCost, tPrice, tWeight);
							newTorso->setBattery(numofBat);

							robot.addTorso(newTorso);
							model1.addTorso(newTorso);
							cout << endl << "The product has been made and added." << endl;
						}

						cin.ignore();
					}

					else if (inputC == 6)
					{
						break;
					}

					else
					{
						while ((inputC < 0) || (inputC > 6))
						{
							cout << "Please Enter a valid option between 1-6: ";
							cin >> inputC;
						}
					}

				}
				else if (input2 == 6)
				{
					break;
				}
				else
				{
					while ((input2 < 0) || (input2 > 6))
					{
						cout << "Please enter valid input between 1-6: " << endl;
						cin >> input2;
					}
				}

			}


		}

		if (input == 2)
		{
			int input3;
			cout << "2.1) View Orders " << endl;
			cout << "2.2) View Customers " << endl;
			cout << "2.3) View Sales Associates " << endl;
			cout << "2.4) Return to Main " << endl;
			cout << "Choice: ";
			cin >> input3;

			while (input3 != 4)
			{
				if (input3 == 1)
				{
					int orderNum;
					cout << "Enter Order Number to view: " << endl;
					cin >> orderNum;
					Shop* checkO = simulation.findOrder(orderNum);
					if (checkO == NULL)
					{
						cout << "This order does not exist." << endl;
					}
					break;
				}
				else if (input3 == 2)
				{
					cout << " LIST OF CUSTOMERS " << endl;
					simulation.viewCustomers();
				}
				else if (input3 == 3) {
					cout << "LIST OF SALES CLERK " << endl;
					simulation.viewEmployees();
				}
				else
				{
					break;
				}
			}
		}
		if (input == 3)
		{
			int custID;
			int orderNum;
			int desiredModelID;
			string custName;
			string empName;
			int empID;
			cout << "Enter customer name: " << endl;
			cin.ignore();
			getline(cin, custName);
			cout << "Enter customer ID: " << endl;
			cin >> custID;

			Customers* checkCust = simulation.findCustomer(custID);
			if (checkCust == NULL)
			{
				cout << "This customer does not exist, please create new profile." << endl;
				break;
			}

			cout << "Enter sale clerk assisting you: " << endl;
			cin.ignore();
			getline(cin, empName);
			cout << "Enter sale clerk's ID: " << endl;
			cin >> empID;

			SalesAssoc* checkEmp = simulation.findEmployee(empID);
			if (checkEmp == NULL)
			{
				cout << "This employee doesn't exist, please create a new one." << endl;
				break;
			}

			cout << " CATALOG OF ROBOT MODELS " << endl;
			simulation.viewModels();
			cout << " Please enter ID of desired model: ";
			cin >> desiredModelID;
			Model* checkM = simulation.findModel(desiredModelID);
			while (checkM == NULL)
			{
				cout << "Please enter valid ID: ";
				cin >> desiredModelID;
				checkM = simulation.findModel(desiredModelID);
			}

			cout << "Please enter order number: " << endl;
			cin >> orderNum;

			Order* checkO = simulation.findOrder(orderNum);
			while (checkO != NULL)
			{
				cout << "Please enter a non-duplicate order number: " << endl;
				cin >> orderNum;
				checkO = simulation.findOrder(orderNum);
			}

			Order* newOrder;
			newOrder = new Order(orderNum, desiredModelID, empID, custID, custName, empName);

			simulation.addOrder(newOrder);

			break;
		}
		else
		{
			break;
		}
	}
	return 0;
}

