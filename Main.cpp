#include <iostream>
#include <vector>
#include <string.h>

#include "Customers.h"
#include "RobotModels.h"
#include "Shop.h"

using namespace std;

int main()
{
	
	Shop simulation;

	int input = 0;
	
	cout << "PAUL-E's Menu" << endl;
	cout << "-------------" << endl;
	cout << "1) Create " << endl;
	cout << "2) Report " << endl;
	cout << "3) Quit " << endl;

	while (input != 3);
	{
		if (input == '1')
		{
			int input2;
			cout << "1.1) Create Customer " << endl;
			cout << "1.2) Create Sales Associate " << endl;
			cout << "1.3) Create Boss " << endl;
			cout << "1.4) Create Robot Model" << endl;
			cout << "1.5) Create Robot Component" << endl;
			cout << "1.6) Return to Main " << endl;
			cout << "Input 1-6. (NOT 1.#)" << endl;
			cin >> input2;
			
			while (numCheck(input2))
			{
				
				if (input2 == '1') //Create a new customer
				{
					string name;
					int ID;

					cout << "Enter name: " << endl;
					getline(cin, name);
					cout << "Enter ID (Can be Phone number)" << endl;
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

					cout << endl << "Press [Enter] to return to main menu." << endl;
					cin.ignore();
				}
				else if (input2 == '2') //Create Sales Associate;
				{
					//Call Customer class here
				}
				else if (input2 == '3')
				{
					//Call Sales Associates class here
				}
				else if (input2 == '4')
				{
					//Create boss here, make sure boss can not be created more than once.
				}
				else if (input2 == '5')
				{
					//Combine models here to make robot
				}
				else if (input2 == '6')
				{
					//Create components here, make another menu for type of components (Arms, Head, Torso, Battery, Locomotive)
					int inputC;
					cout << "1) Create Arms " << endl;
					cout << "2) Create Batteries " << endl;
					cout << "3) Create Head " << endl;
					cout << "4) Create Locomotive " << endl;
					cout << "5) Create Torso" << endl;
					cout << "6) Return to Main Menu" << endl;
					cin >> inputC;
					numCheck(inputC);

					if (inputC == '1')
					{
						//Enter arms class here, maybe ask for left and right?
					}
					
					else if (inputC == '2')
					{
						//Enter Batteries class here
					}
					
					else if (inputC == '3')
					{
						//Enter batteries class here
					}

					else if (inputC == '4')
					{
						//Enter Locomotive class here
					}

					else if (inputC == '5')
					{
						//Enter torso class here
					}
					
					else if (inputC == '6')
					{
						
					}

					else
					{
						while((inputC < 0) || (inputC > 6))
						{
							cout << "Please Enter a valid option between 1-6: ";
							cin >> inputC;
							numCheck(inputC);
						}
					}
 
				}
				else if (input2 == '7')
				{
				
				}
				else
				{
					while ((input2 < 0) || (input2 > 7))
					{
						cout << "Please enter valid input between 1-7: " << endl;
						cin >> input2;
						numCheck(input2);
					}
				}

			}


		}

		if (input == '2')
		{
			int input3;
			cout << "2.1) View Orders " << endl;
			cout << "2.2) View Customers " << endl;
			cout << "2.3) View Sales Associates " << endl;
			cout << "2.4) View Robot Models " << endl;
			cout << "2.5) View Robot Components " << endl;
			cout << "2.6) Return to Main " << endl;
			cin >> input3;
			numCheck(input3);
		}

		if (input == '3'){
		
		}
			
	}
	return input;
}

int numCheck(int c)
{
	while (!isdigit(c))
	{
		cout << "Please Enter a Valid Integer: " << endl;
		cin >> c;
	}
	return c;
}