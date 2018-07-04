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
	int Choice;
	int v1;
	int v2;
	int m_level;
	int m_exp;
	int m_expnext;
	int m_skillpoints;
	int m_statpoints;
	int m_health;
	int m_mana;
	int m_maxhealth;
	int m_maxmana;

public:
	//Acessors

	int GetMaxHealth() { return m_maxhealth; }
	int GetMaxMana() { return m_maxmana; }
	int GetHealth() { return m_health; }
	int GetMana() { return m_mana; }
	int GetLevel() { return m_level; }
	int GetExp() { return m_exp; }
	int GetExpNext() { return m_expnext; }
	int GetStatPoints() { return m_statpoints; }
	int GetSkillPoints() { return m_skillpoints; }

	//Modifers

	void SetHealth(int Health) { m_health = Health; }
	void SetMana(int Mana) { m_mana = Mana; }
	void SetMaxHealth(int MaxHealth) { m_maxhealth = MaxHealth; }
	void SetMaxMana(int MaxMana) { m_maxmana = MaxMana; }
	void SetLevel(int Level) { m_level = Level; }
	void SetExp(int Exp) { m_exp = Exp; }
	void SetExpNext(int ExpNext) { m_expnext = ExpNext; }
	void SetStatPoints(int StatPoints) { m_statpoints = StatPoints; }
	void SetSkillPoints(int SkillPoints) { m_skillpoints = SkillPoints; }

	//RestMenu
	void RestMenu()
	{
		v1 = rand() % (GetMaxHealth() / 2) + GetHealth();
		v2 = rand() % (GetMaxMana() / 2) + GetMana();
		SetHealth(v1);
		SetMana(v2);
		if (GetHealth() > GetMaxHealth())
		{
			SetHealth(GetMaxHealth());
		}
		if (GetMana() > GetMaxMana())
		{
			SetMana(GetHealth());
		}
	}
	void PrintMainMenu()
	{


		std::cout << "Health: " << GetHealth() << "/" << GetMaxHealth() << " Mana: " << GetMana() << "/" << GetMaxMana() << endl;
		std::cout << "---------------------" << endl;
		std::cout << "1.Travel" << endl;
		std::cout << "2.Rest" << endl;
		std::cout << "3.Inventory" << endl;
		std::cout << "4.Character Sheet" << endl;
		std::cout << "5.Save Character" << endl;
		std::cout << "6.Load Character" << endl;
		std::cout << "7.Quit" << endl;
		std::cout << "---------------------" << endl;
	}
	void PrintCharacterInfo()
	{
		system("CLS");
		cout << "Character Sheet" << endl;
		cout << "=======Level Info==========" << endl;
		cout << "Level:" << GetLevel() << endl;
		cout << "Exp:" << GetExp() << "/" << GetExpNext() << endl;
		cout << "=========Status============" << endl;
		cout << "Health:" << GetHealth() << "/" << GetMaxHealth() << endl;
		cout << "Mana:" << GetMana() << "/" << GetMaxMana() << endl;
		cout << "=========Stats==============" << endl;
		cout << "Strength:" << endl;
		cout << "Constitution:" << endl;
		cout << "Dexterity:" << endl;
		cout << "Intelligence:" << endl;
		cout << "Wisdom:" << endl;
		cout << "Charisma:" << endl;
		cout << "=========Skills=============" << endl;
		cout << "Swords:" << endl; //Its 4 in the morning and i cant go to sleep help
		cout << "Axes:" << endl;
		cout << "Bow:" << endl;
		cout << "Martial Arts:" << endl;
		cout << "Reading:" << endl;
		cout << "Climbing:" << endl;
		cout << "Crafting:" << endl;
		cout << "=========Points=============" << endl;
		cout << "Skill Points:" << GetSkillPoints() << endl;
		cout << "Stat Points:" << GetStatPoints() << endl;
		cout << "============================" << endl;
		cout << "1.Assgin Statpoints" << endl;
		cout << "2.Assgin Skillpoints" << endl;
		cout << "3.Back" << endl;
		cin >> Choice;
		switch (Choice)
		{
		case 1:
			cout << "============================" << endl;
			cout << "1.Strength" << endl;
			cout << "2.Constitution" << endl;
			cout << "3.Dexterity" << endl;
			cout << "4.Intelligence" << endl;
			cout << "5.Wisdom" << endl;
			cout << "6.Charisma" << endl;
			cout << "============================" << endl;
			cin >> Choice;
			switch (Choice)
			{
			case 1:
				SetStatPoints((GetStatPoints() - 1));
				break;
			case 2:
				SetStatPoints((GetStatPoints() - 1));
				break;
			case 3:
				SetStatPoints((GetStatPoints() - 1));
				break;
			case 4:
				SetStatPoints((GetStatPoints() - 1));
				break;
			case 5:
				SetStatPoints((GetStatPoints() - 1));
				break;
			case 6:
				SetStatPoints((GetStatPoints() - 1));
				break;
			default:
				cout << "Invalid Input" << endl;
				break;
			}
			break;
		case 2:
			cout << "============================" << endl;
			break;
		case 3:
			break;
		default:
			cout << "Invalid Input" << endl;
			break;
		}
	}
	//Character Intlitaizer
	void CharacterInlitalize()
	{
		m_level = 1;
		m_exp = 0;
		m_expnext = (m_level * 100); //Can be Changed Based On Diffuculty
		m_skillpoints = 2;
		m_statpoints = 2;
		m_maxmana = 10; //Place Holder
		m_maxhealth = 10; //Place Holder
		m_health = 0; //Place Holder
		m_mana = 10; //Place Holder

	}
	//Constructer
	Character()
	{
		m_level = 0;
		m_exp = 0;
		m_expnext = 0;
		m_skillpoints = 0;
		m_statpoints = 0;
		m_maxmana = 0;
		m_maxhealth = 0;
		m_health = 0;
		m_mana = 0;
	}
};

//Functions

//Empty Space

int main()
{
	//Class Callers
	Character PC; //'Player Character'

	srand(time(NULL)); //Randomizer

					   //Variables	
	bool Playing = true; //Keeps Gamerunning
	int Choice; //Menu Choices
	int ChangingVariable; //Throw Away Variable
	int ChangingVariable2; //Throw Away Variable
						   //Non Repeating Starting Functions
	PC.CharacterInlitalize();
	while (Playing) //Gameloop
	{
		PC.PrintMainMenu();

		cin >> Choice; //Do Not Enter Characters

		switch (Choice)
		{
		case 1:
			system("CLS");
			break;

		case 2:
			system("CLS");
			std::cout << "Warning!: Resting Outside Of A Inn Will Will Drain Your Hunger!" << endl;
			std::cout << "------------------------------" << endl;
			std::cout << "1.Rest" << endl;
			std::cout << "2.Back" << endl;
			std::cout << "------------------------------" << endl;
			cin >> Choice;
			switch (Choice)
			{
			case 1:
				PC.RestMenu();
				break;

			case 2:
				break;

			default:
				std::cout << "Invalid Choice" << endl;
				break;
			}

		case 3:
			system("CLS");
			break;
		case 4:
			PC.PrintCharacterInfo();
			break;

		case 5:
			system("CLS");
			break;

		case 6:
			system("CLS");
			break;

		case 7:
			return 0;
			break;

		default:
			system("CLS");
			std::cout << "Invalid Choice" << endl;
			break;

		}
	}
	return 0;
}
