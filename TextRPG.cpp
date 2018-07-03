#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Global Variables

//Classes

class Character
{
private:
	//Variables
	int health;
	int mana;
public:
	//Acessors
	int GetHealth() { return health; }
	int GetMana() { return mana; }
	//Modifers
	void SetHealth(int x)
	{
		this->health = x;
	}
	void SetMana(int x)
	{
		this->mana = x;
	}
};
//Functions

void PrintMainMenu()
{
	//Class Caller
	Character PC; //'Player Character'

	cout << "Health: " << PC.GetHealth() << " Mana: " << PC.GetMana() << endl;
	cout << "---------------------" << endl;
	cout << "1.Travel" << endl;
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
	Character PC; //'Player Character'
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