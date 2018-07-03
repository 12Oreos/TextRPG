#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Global Variables

//Classes

//Functions

void PrintMainMenu()
{
	cout << "Health: " << " Mana: " << endl;
	cout << "---------------------" << endl;
	cout << "1.Option" << endl;
	cout << "2.Rest" << endl;
	cout << "3.Inventory" << endl;
	cout << "4.Character Sheet" << endl;
	cout << "5.Save Character" << endl;
	cout << "6.Load Character" << endl;
	cout << "7.Quit" << endl;
	cout << "---------------------" << endl;
}

//Empty Space






//Empty Space


int main()
{
	//Class Callers

	//Variables
	bool Playing = true; //Keeps Gamerunning
	int Choice; //Menu Choices
	//Gameloop
	while (Playing)
	{
		PrintMainMenu();
		cin >> Choice; //Do Not Enter Characters
		switch (Choice)
		{
		case 7:
			return 0;
			break;
		default:
			cout << "Invalid Choice" << endl;
			break;
		}
	}
	return 0;
}