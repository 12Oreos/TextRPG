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
	int m_strength;
	int m_constitution;
	int m_dexterity;
	int m_intelligence;
	int m_wisdom;
	int m_charisma;
	int m_attunment;
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
	int GetStrength() { return m_strength; }
	int GetConstitution() { return m_constitution; }
	int GetDexterity() { return m_dexterity; }
	int GetIntelligence() { return m_intelligence; }
	int GetWisdom() { return m_wisdom; }
	int GetCharisma() { return m_charisma; }
	int GetAttunment() { return m_attunment; }

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
	void SetStrength(int Strength) { m_strength = Strength; }
	void SetConstitution(int Constitution) { m_constitution = Constitution; }
	void SetDexterity(int Dexterity) { m_dexterity = Dexterity; }
	void SetIntelligence(int Intelligence) { m_intelligence = Intelligence; }
	void SetWisdom(int Wisdom) { m_wisdom = Wisdom; }
	void SetCharisma(int Charisma) { m_charisma = Charisma; }
	void SetAttunment(int Attunment) { m_attunment = Attunment; }

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
			SetMana(GetMaxMana());
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
		std::cout << "8.Debug" << endl;
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
		cout << "Strength:" << GetStrength() << endl;
		cout << "Constitution:" << GetConstitution() << endl;
		cout << "Dexterity:" << GetDexterity() << endl;
		cout << "Intelligence:" << GetIntelligence() << endl;
		cout << "Wisdom:" << GetWisdom() << endl;
		cout << "Charisma:" << GetCharisma() << endl;
		cout << "Attunment:" << GetAttunment() << endl;
		cout << "=========Skills=============" << endl;
		cout << "Swords:" << endl;
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
			cout << "7.Attunment" << endl;
			cout << "============================" << endl;
			cin >> Choice;
			if (GetStatPoints() > 0)
			{
				switch (Choice)
				{
				case 1:
					SetStatPoints((GetStatPoints() - 1));
					SetStrength((GetStrength() + 1));
					system("CLS");
					break;
				case 2:
					SetStatPoints((GetStatPoints() - 1));
					SetConstitution((GetConstitution() + 1));
					system("CLS");
					break;
				case 3:
					SetStatPoints((GetStatPoints() - 1));
					SetDexterity((GetDexterity() + 1));
					system("CLS");
					break;
				case 4:
					SetStatPoints((GetStatPoints() - 1));
					SetIntelligence((GetIntelligence() + 1));
					system("CLS");
					break;
				case 5:
					SetStatPoints((GetStatPoints() - 1));
					SetWisdom((GetWisdom() + 1));
					system("CLS");
					break;
				case 6:
					SetStatPoints((GetStatPoints() - 1));
					SetCharisma((GetCharisma() + 1));
					system("CLS");
					break;
				case 7:
					SetStatPoints((GetStatPoints() - 1));
					SetAttunment((GetAttunment() + 1));
					system("CLS");
					break;
				default:
					system("CLS");
					cout << "Invalid Input" << endl;
					cout << "============================" << endl;
					break;
				}
			}
			break;
		case 2:
			cout << "=========================" << endl;
			break;
		case 3:
			system("CLS");
			break;
		default:
			system("CLS");
			cout << "Invalid Input" << endl;
			cout << "=========================" << endl;
			break;
		}
	}
	//Character Intitaize
	void CharacterInitalize()
	{
		m_level = 1;
		m_exp = 0;
		m_expnext = (m_level * 100); //Can be Changed Based On Diffuculty
		m_skillpoints = 2;
		m_statpoints = 2;
		m_maxmana = m_attunment + (m_level * 10) - 1;
		m_maxhealth = m_constitution + (m_level * 10) - 1;
		m_health = 10;
		m_mana = 10;
		m_strength = 1;
		m_constitution = 1;
		m_dexterity = 1;
		m_intelligence = 1;
		m_wisdom = 1;
		m_charisma = 1;
		m_attunment = 1;
	}
	//Stat Updater
	void Updater()
	{
		m_maxhealth = m_constitution + (m_level * 10) - 1;
		m_maxmana = m_attunment + (m_level * 10) - 1;
		m_expnext = (m_level * 100);
		if (GetHealth() > GetMaxHealth())
		{
			SetHealth(GetMaxHealth());
		}
		if (GetMana() > GetMaxMana())
		{
			SetMana(GetMaxMana());
		}
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
		m_strength = 0;
		m_constitution = 0;
		m_dexterity = 0;
		m_intelligence = 0;
		m_wisdom = 0;
		m_charisma = 0;

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
	bool UpdaterActive = true; //Keeps Updater Online
	int Choice; //Menu Choices
	int SubChoice; //Sub-Menu Choices
	int ChangingVariable; //Throw Away Variable
	int ChangingVariable2; //Throw Away Variable
						   //Non Repeating Starting Functions
	PC.CharacterInitalize();
	while (Playing) //Gameloop
	{
		if (UpdaterActive) { PC.Updater(); }
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
		case 8:
			if (Choice = 8, 1, 5)
				cout << "=========================" << endl;
			cout << "1.Print Values" << endl;
			cout << "2.Change Values" << endl;
			cout << "3.Disable Updater" << endl;
			cout << "4.Enable Updater" << endl;
			cout << "5.Back" << endl;
			cout << "=========================" << endl;
			cin >> Choice;
			switch (Choice)
			{
			case 1:
				cout << "=========================" << endl;
				cout << "1.Health:" << PC.GetHealth() << endl;
				cout << "2.Mana:" << PC.GetMana() << endl;
				cout << "3.Max Health:" << PC.GetMaxHealth() << endl;
				cout << "4.Max Mana:" << PC.GetMaxMana() << endl;
				cout << "5.Strength:" << PC.GetStrength() << endl;
				cout << "6.Constitution:" << PC.GetConstitution() << endl;
				cout << "7.Dexterity:" << PC.GetDexterity() << endl;
				cout << "8.Intelligence:" << PC.GetIntelligence() << endl;
				cout << "9.Wisdom:" << PC.GetWisdom() << endl;
				cout << "10.Charisma:" << PC.GetCharisma() << endl;
				cout << "11.Attunment:" << PC.GetAttunment() << endl;
				cout << "12.Stat Points:" << PC.GetStatPoints() << endl;
				cout << "13.Skill Points:" << PC.GetSkillPoints() << endl;
				cout << "14.Exp:" << PC.GetExp() << endl;
				cout << "15.Exp to Next Level:" << PC.GetExpNext() << endl;
				cout << "16.Level:" << PC.GetLevel() << endl;
				cout << "=========================" << endl;
				break;
			case 2:
				cin >> SubChoice;
				cout << "=========================" << endl;
				cout << "Type -1 to Exit" << endl;
				cout << "=========================" << endl;
				switch (SubChoice)
				{
				case -1:
					break;
				case 1:
					cin >> SubChoice;
					PC.SetHealth(SubChoice);
					break;
				case 2:
					cin >> SubChoice;
					PC.SetMana(SubChoice);
					break;
				case 3:
					cin >> SubChoice;
					PC.SetMaxHealth(SubChoice);
					break;
				case 4:
					cin >> SubChoice;
					PC.SetMaxMana(SubChoice);
					break;
				case 5:
					cin >> SubChoice;
					PC.SetStrength(SubChoice);
					break;
				case 6:
					cin >> SubChoice;
					PC.SetConstitution(SubChoice);
					break;
				case 7:
					cin >> SubChoice;
					PC.SetDexterity(SubChoice);
					break;
				case 8:
					cin >> SubChoice;
					PC.SetIntelligence(SubChoice);
					break;
				case 9:
					cin >> SubChoice;
					PC.SetWisdom(SubChoice);
					break;
				case 10:
					cin >> SubChoice;
					PC.SetCharisma(SubChoice);
					break;
				case 11:
					cin >> SubChoice;
					PC.SetAttunment(SubChoice);
					break;
				case 12:
					cin >> SubChoice;
					PC.SetStatPoints(SubChoice);
					break;
				case 13:
					cin >> SubChoice;
					PC.SetSkillPoints(SubChoice);
					break;
				case 14:
					cin >> SubChoice;
					PC.SetExp(SubChoice);
					break;
				case 15:
					cin >> SubChoice;
					PC.SetExpNext(SubChoice);
					break;
				case 16:
					cin >> SubChoice;
					PC.SetLevel(SubChoice);
					break;
				default:
					cout << "Invalid Choice" << endl;
					break;
				}
				break;
			case 3:
				UpdaterActive = false;
				break;
			case 4:
				UpdaterActive = true;
				break;
			case 5:
				break;
			default:
				cout << "Invalid Choice" << endl;
				break;
				system("CLS");
			}
			break;


		default:
			system("CLS");
			std::cout << "Invalid Choice" << endl;
			break;

		}
	}
	return 0;
}
