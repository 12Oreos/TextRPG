#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <string>
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
	int level;
	int exp;
	int expnext;
	int skillpoints;
	int statpoints;
	int health;
	int mana;
	int maxhealth;
	int maxmana;
    int hunger;
    int maxhunger;
	int strength;
	int constitution;
	int dexterity;
	int intelligence;
	int wisdom;
	int charisma;
	int attunment;
	int gold;
public:
	//Acessors
	int GetMaxHealth() { return maxhealth; }
	int GetMaxMana() { return maxmana; }
	int GetHealth() { return health; }
	int GetMana() { return mana; }
  int GetMaxHunger() { return maxhunger; }
  int GetHunger() { return hunger; }
	int GetLevel() { return level; }
	int GetExp() { return exp; }
	int GetExpNext() { return expnext; }
	int GetStatPoints() { return statpoints; }
	int GetSkillPoints() { return skillpoints; }
	int GetStrength() { return strength; }
	int GetConstitution() { return constitution; }
	int GetDexterity() { return dexterity; }
	int GetIntelligence() { return intelligence; }
	int GetWisdom() { return wisdom; }
	int GetCharisma() { return charisma; }
	int GetAttunment() { return attunment; }
	int GetGold() { return gold; }
	//Modifers
	void SetHealth(int Health) { health = Health; }
	void SetMana(int Mana) { mana = Mana; }
    void SetHunger(int Hunger) { hunger = Hunger; }
	void SetMaxHealth(int MaxHealth) { maxhealth = MaxHealth; }
	void SetMaxMana(int MaxMana) { maxmana = MaxMana; }
    void setMaxHunger(int MaxHunger) { maxhunger = MaxHunger; }
	void SetLevel(int Level) { level = Level; }
	void SetExp(int Exp) { exp = Exp; }
	void SetExpNext(int ExpNext) { expnext = ExpNext; }
	void SetStatPoints(int StatPoints) { statpoints = StatPoints; }
	void SetSkillPoints(int SkillPoints) { skillpoints = SkillPoints; }
	void SetStrength(int Strength) { strength = Strength; }
	void SetConstitution(int Constitution) { constitution = Constitution; }
	void SetDexterity(int Dexterity) { dexterity = Dexterity; }
	void SetIntelligence(int Intelligence) { intelligence = Intelligence; }
	void SetWisdom(int Wisdom) { wisdom = Wisdom; }
	void SetCharisma(int Charisma) { charisma = Charisma; }
	void SetAttunment(int Attunment) { attunment = Attunment; }
	void SetGold(int Gold) { gold = Gold; }
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
		std::cout << "Hunger: " << GetHunger() << "/" << GetMaxHunger() << endl;
		std::cout << "---------------------" << endl;
		std::cout << "0.Quit" << endl;
		std::cout << "1.Travel" << endl;
		std::cout << "2.Rest" << endl;
		std::cout << "3.Inventory" << endl;
		std::cout << "4.Character Sheet" << endl;
		std::cout << "5.Save Character" << endl;
		std::cout << "6.Load Character" << endl;
		std::cout << "7.Combat Arena" << endl;
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
		cout << "Gold:" << GetGold() << endl;
		cout << "Hunger: " << GetHunger() << "/" << GetMaxHunger() << endl;
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
		level = 1;
		exp = 0;
		expnext = (level * 100); //Can be Changed Based On Diffuculty
		skillpoints = 2;
		statpoints = 2;
		maxmana = (attunment * 2) + (level * 10) - 1;
		maxhealth = (constitution * 2) + (level * 10) - 1;
		maxhunger = (constitution * 2) + (level * 10) - 1;
		health = 10;
		mana = 10;
        hunger = 10;
		strength = 1;
		constitution = 1;
		dexterity = 1;
		intelligence = 1;
		wisdom = 1;
		charisma = 1;
		attunment = 1;
		gold = 10;
	}
	//Stat Updater
	void Updater()
	{
		SetMaxHealth((constitution * 2) + (level * 10) - 1);
		SetMaxMana((attunment * 2) + (level * 10) - 1);
		SetExpNext((GetLevel() * 100));
		if (GetHealth() > GetMaxHealth())
		{
			SetHealth(GetMaxHealth());
		}
		if (GetMana() > GetMaxMana())
		{
			SetMana(GetMaxMana());
		}
		if (GetExp() >= GetExpNext())
		{
			SetLevel(GetLevel() + 1);
			SetStatPoints(GetStatPoints() + 2);
			SetSkillPoints(GetSkillPoints() + 5);
			SetExp(0);
		}
		if (GetHunger() > GetMaxHunger())
		{
			SetHunger(GetMaxHunger());
		}
	}
	//Constructer
	Character()
	{
		level = 0;
		exp = 0;
		expnext = 0;
		skillpoints = 0;
		statpoints = 0;
		maxmana = 0;
		maxhealth = 0;
		health = 0;
		mana = 0;
		strength = 0;
		constitution = 0;
		dexterity = 0;
		intelligence = 0;
		wisdom = 0;
		charisma = 0;
		gold = 0;
	}
};
class Combat
{
	//Variables
	int Choice;
	int level;
	int health;
	int mana;
	int maxhealth;
	int maxmana;
	int strength;
	int constitution;
	int dexterity;
	int intelligence;
	int wisdom;
	int charisma;
	int attunment;
public:
	//Acessors
	int GetMaxHealth() { return maxhealth; }
	int GetMaxMana() { return maxmana; }
	int GetHealth() { return health; }
	int GetMana() { return mana; }
	int GetLevel() { return level; }
	int GetStrength() { return strength; }
	int GetConstitution() { return constitution; }
	int GetDexterity() { return dexterity; }
	int GetIntelligence() { return intelligence; }
	int GetWisdom() { return wisdom; }
	int GetCharisma() { return charisma; }
	int GetAttunment() { return attunment; }
	//Modifers
	void SetHealth(int Health) { health = Health; }
	void SetMana(int Mana) { mana = Mana; }
	void SetMaxHealth(int MaxHealth) { maxhealth = MaxHealth; }
	void SetMaxMana(int MaxMana) { maxmana = MaxMana; }
	void SetLevel(int Level) { level = Level; }
	void SetStrength(int Strength) { strength = Strength; }
	void SetConstitution(int Constitution) { constitution = Constitution; }
	void SetDexterity(int Dexterity) { dexterity = Dexterity; }
	void SetIntelligence(int Intelligence) { intelligence = Intelligence; }
	void SetWisdom(int Wisdom) { wisdom = Wisdom; }
	void SetCharisma(int Charisma) { charisma = Charisma; }
	void SetAttunment(int Attunment) { attunment = Attunment; }
};

//Functions
//Empty Space
int main()
{
	//Class Callers
	Character PC; //Player Character
	srand(time(NULL)); //Randomizer
					   //Variables	
	bool Playing = true; //Keeps Gamerunning
	bool UpdaterActive = true; //Keeps Updater Online
	int Choice; //Menu Choices
	int SubChoice; //Sub-Menu Choice
	string StringChoice; //Naming Choices
	string MacroName1 = "EMPTY MACRO";
	string MacroName2 = "EMPTY MACRO";
	string MacroName3 = "EMPTY MACRO";
	string MacroName4 = "EMPTY MACRO";
	string MacroName5 = "EMPTY MACRO";
	int CombatArenaEnemyChance;
	int ChangingVariable0;
	int ChangingVariable;
	int ChangingVariable2;
	int ChangingVariable3;
    int healthDec;
	bool ChangingBool;
	bool ChangingBool2;
	PC.CharacterInitalize();
	while (Playing) //Gameloop
	{
		if (UpdaterActive) { PC.Updater(); }
		PC.PrintMainMenu();
		std::cin >> Choice; //Do Not Enter Characters
		switch (Choice)
		{
		case 1:
			healthDec = rand()%(2-1 + 1) + 1;
      std::system("CLS");
      PC.SetHunger(PC.GetHunger()-healthDec);
			break;
		case 2:
			std::system("CLS");
			std::cout << "Warning!: Resting Outside Of A Inn Will Will Drain Your Hunger!" << endl;
			std::cout << "------------------------------" << endl;
			std::cout << "1.Rest" << endl;
			std::cout << "2.Back" << endl;
			std::cout << "------------------------------" << endl;
			std::cin >> Choice;
			switch (Choice)
			{
			case 0:
				return 0;
				break;
			case 1:
				PC.RestMenu();
				break;
			case 2:
				break;
			default:
				std::cout << "Invalid Choice" << endl;
				break;
			
		case 3:
			std::system("CLS");
			break;
		case 4:
			PC.PrintCharacterInfo();
			break;
		case 5:
			std::system("CLS");
			break;
		case 6:
			std::system("CLS");
			break;
		case 7:
			ChangingBool = true;
			ChangingBool2 = true;
			while (ChangingBool)
			{
				std::system("CLS");
				std::cout << "=========================" << endl;
				std::cout << "Fight Enemies for Gold, Fighters Level With You!" << endl;
				std::cout << "1.Fight!" << endl;
				std::cout << "2.Back" << endl;
				std::cout << "=========================" << endl;
				CombatArenaEnemyChance = rand() % 4; //Enemy Chance Count (0)-1 (1)-2 (2)-3 (3)-4 (4)-5
				switch (CombatArenaEnemyChance)
				{
				case 0:
					system("CLS");
					Combat Enemy1;
					Enemy1.SetMaxHealth(((PC.GetMaxHealth()*PC.GetLevel()) / 2) + 1);
					Enemy1.SetHealth(Enemy1.GetMaxHealth());
					while (Enemy1.GetHealth() > 0)
					{
						std::cout << "=========================" << endl;
						cout << "1. HP: " << Enemy1.GetHealth() << "/" << Enemy1.GetMaxHealth() << endl;
						std::cout << "=========================" << endl;
						cin >> Choice;
						switch (Choice)
						{
						case 1:
							Enemy1.SetHealth(Enemy1.GetHealth() - PC.GetStrength());
							system("CLS");
							cout << "You Did " << PC.GetStrength() << " Damage!" << endl;
							break;
						default:
							break;
						}
					}
					break;
				case 1:
					system("CLS");
					Combat Enemy2;
					Enemy1.SetMaxHealth(((PC.GetMaxHealth()*PC.GetLevel()) / 2) + 1);
					Enemy1.SetHealth(Enemy1.GetMaxHealth());
					Enemy2.SetMaxHealth(((PC.GetMaxHealth()*PC.GetLevel()) / 2) + 1);
					Enemy2.SetHealth(Enemy2.GetMaxHealth());
					while (Enemy1.GetHealth() > 0 || Enemy2.GetHealth() > 0)
					{
						std::cout << "=========================" << endl;
						cout << "1. HP: " << Enemy1.GetHealth() << "/" << Enemy1.GetMaxHealth() << endl;
						cout << "2. HP: " << Enemy2.GetHealth() << "/" << Enemy2.GetMaxHealth() << endl;
						std::cout << "=========================" << endl;
						cin >> Choice;
						switch (Choice)
						{
						case 1:
							Enemy1.SetHealth(Enemy1.GetHealth() - PC.GetStrength());
							system("CLS");
							cout << "You Did " << PC.GetStrength() << " Damage!" << endl;
							break;
						case 2:
							Enemy2.SetHealth(Enemy2.GetHealth() - PC.GetStrength());
							system("CLS");
							cout << "You Did " << PC.GetStrength() << " Damage!" << endl;
							break;
						default:
							break;
						}
					}
					break;
				case 2:
					system("CLS");
					Combat Enemy3;
					Enemy1.SetMaxHealth(((PC.GetMaxHealth()*PC.GetLevel()) / 2) + 1);
					Enemy1.SetHealth(Enemy1.GetMaxHealth());
					Enemy2.SetMaxHealth(((PC.GetMaxHealth()*PC.GetLevel()) / 2) + 1);
					Enemy2.SetHealth(Enemy2.GetMaxHealth());
					Enemy3.SetMaxHealth(((PC.GetMaxHealth()*PC.GetLevel()) / 2) + 1);
					Enemy3.SetHealth(Enemy3.GetMaxHealth());
					while (Enemy1.GetHealth() > 0 || Enemy2.GetHealth() > 0 || Enemy3.GetHealth() > 0)
					{
						std::cout << "=========================" << endl;
						cout << "1. HP: " << Enemy1.GetHealth() << "/" << Enemy1.GetMaxHealth() << endl;
						cout << "2. HP: " << Enemy2.GetHealth() << "/" << Enemy2.GetMaxHealth() << endl;
						cout << "3. HP: " << Enemy3.GetHealth() << "/" << Enemy3.GetMaxHealth() << endl;
						std::cout << "=========================" << endl;
						cin >> Choice;
						switch (Choice)
						{
						case 1:
							Enemy1.SetHealth(Enemy1.GetHealth() - PC.GetStrength());
							system("CLS");
							cout << "You Did " << PC.GetStrength() << " Damage!" << endl;
							break;
						case 2:
							Enemy2.SetHealth(Enemy2.GetHealth() - PC.GetStrength());
							system("CLS");
							cout << "You Did " << PC.GetStrength() << " Damage!" << endl;
							break;
						case 3:
							Enemy3.SetHealth(Enemy3.GetHealth() - PC.GetStrength());
							system("CLS");
							cout << "You Did " << PC.GetStrength() << " Damage!" << endl;
							break;
						default:
							break;
						}
					}
					break;
				case 3:
					system("CLS");
					Combat Enemy4;
					Enemy1.SetMaxHealth(((PC.GetMaxHealth()*PC.GetLevel()) / 2) + 1);
					Enemy1.SetHealth(Enemy1.GetMaxHealth());
					Enemy2.SetMaxHealth(((PC.GetMaxHealth()*PC.GetLevel()) / 2) + 1);
					Enemy2.SetHealth(Enemy2.GetMaxHealth());
					Enemy3.SetMaxHealth(((PC.GetMaxHealth()*PC.GetLevel()) / 2) + 1);
					Enemy3.SetHealth(Enemy3.GetMaxHealth());
					Enemy4.SetMaxHealth(((PC.GetMaxHealth()*PC.GetLevel()) / 2) + 1);
					Enemy4.SetHealth(Enemy4.GetMaxHealth());
					while (Enemy1.GetHealth() > 0 || Enemy2.GetHealth() > 0 || Enemy3.GetHealth() > 0 || Enemy4.GetHealth() > 0)
					{
						std::cout << "=========================" << endl;
						cout << "1. HP: " << Enemy1.GetHealth() << "/" << Enemy1.GetMaxHealth() << endl;
						cout << "2. HP: " << Enemy2.GetHealth() << "/" << Enemy2.GetMaxHealth() << endl;
						cout << "3. HP: " << Enemy3.GetHealth() << "/" << Enemy3.GetMaxHealth() << endl;
						cout << "4. HP: " << Enemy4.GetHealth() << "/" << Enemy4.GetMaxHealth() << endl;
						std::cout << "=========================" << endl;
						cin >> Choice;
						switch (Choice)
						{
						case 1:
							Enemy1.SetHealth(Enemy1.GetHealth() - PC.GetStrength());
							system("CLS");
							cout << "You Did " << PC.GetStrength() << " Damage!" << endl;
							break;
						case 2:
							Enemy2.SetHealth(Enemy2.GetHealth() - PC.GetStrength());
							system("CLS");
							cout << "You Did " << PC.GetStrength() << " Damage!" << endl;
							break;
						case 3:
							Enemy3.SetHealth(Enemy3.GetHealth() - PC.GetStrength());
							system("CLS");
							cout << "You Did " << PC.GetStrength() << " Damage!" << endl;
							break;
						case 4:
							Enemy4.SetHealth(Enemy4.GetHealth() - PC.GetStrength());
							system("CLS");
							cout << "You Did " << PC.GetStrength() << " Damage!" << endl;
							break;
						default:
							break;
						}
					}
					break;
				case 4:
					system("CLS");
					Combat Enemy5;
					Enemy1.SetMaxHealth(((PC.GetMaxHealth()*PC.GetLevel()) / 2) + 1);
					Enemy2.SetMaxHealth(((PC.GetMaxHealth()*PC.GetLevel()) / 2) + 1);
					Enemy2.SetHealth(Enemy2.GetMaxHealth());
					Enemy1.SetHealth(Enemy1.GetMaxHealth());
					Enemy3.SetMaxHealth(((PC.GetMaxHealth()*PC.GetLevel()) / 2) + 1);
					Enemy3.SetHealth(Enemy3.GetMaxHealth());
					Enemy4.SetMaxHealth(((PC.GetMaxHealth()*PC.GetLevel()) / 2) + 1);
					Enemy4.SetHealth(Enemy4.GetMaxHealth());
					Enemy5.SetMaxHealth(((PC.GetMaxHealth()*PC.GetLevel()) / 2) + 1);
					Enemy5.SetHealth(Enemy5.GetMaxHealth());
					while (Enemy1.GetHealth() > 0 || Enemy2.GetHealth() > 0 || Enemy3.GetHealth() > 0 || Enemy4.GetHealth() > 0 || Enemy5.GetHealth() > 0)
					{
						std::cout << "=========================" << endl;
						cout << "1. HP: " << Enemy1.GetHealth() << "/" << Enemy1.GetMaxHealth() << endl;
						cout << "2. HP: " << Enemy2.GetHealth() << "/" << Enemy2.GetMaxHealth() << endl;
						cout << "3. HP: " << Enemy3.GetHealth() << "/" << Enemy3.GetMaxHealth() << endl;
						cout << "4. HP: " << Enemy4.GetHealth() << "/" << Enemy4.GetMaxHealth() << endl;
						cout << "5. HP: " << Enemy5.GetHealth() << "/" << Enemy5.GetMaxHealth() << endl;
						std::cout << "=========================" << endl;
						cin >> Choice;
						switch (Choice)
						{
						case 1:
							Enemy1.SetHealth(Enemy1.GetHealth() - PC.GetStrength());
							system("CLS");
							cout << "You Did " << PC.GetStrength() << " Damage!" << endl;
							break;
						case 2:
							Enemy2.SetHealth(Enemy2.GetHealth() - PC.GetStrength());
							system("CLS");
							cout << "You Did " << PC.GetStrength() << " Damage!" << endl;
							break;
						case 3:
							Enemy3.SetHealth(Enemy3.GetHealth() - PC.GetStrength());
							system("CLS");
							cout << "You Did " << PC.GetStrength() << " Damage!" << endl;
							break;
						case 4:
							Enemy4.SetHealth(Enemy4.GetHealth() - PC.GetStrength());
							system("CLS");
							cout << "You Did " << PC.GetStrength() << " Damage!" << endl;
							break;
						case 5:
							Enemy5.SetHealth(Enemy5.GetHealth() - PC.GetStrength());
							system("CLS");
							cout << "You Did " << PC.GetStrength() << " Damage!" << endl;
							break;
						default:
							break;
						}
					}
					break;
				default:
					break;
				}
				system("CLS");
				ChangingVariable = rand() % (CombatArenaEnemyChance * 5) + 10;
				ChangingVariable0 = rand() % (CombatArenaEnemyChance * 5) + 20;
				std::cout << "=========================" << endl;
				std::cout << "You Won " << ChangingVariable << " Gold!" << endl;
				std::cout << "And " << ChangingVariable0 << " Exp!" << endl;
				std::cout << "1.Fight Again" << endl;
				std::cout << "2.Main Menu" << endl;
				std::cout << "=========================" << endl;
				PC.SetExp(PC.GetExp() + ChangingVariable0);
				PC.SetGold(PC.GetGold() + ChangingVariable);
				std::cin >> Choice;
				switch (Choice)
				{
				case 1:
					ChangingBool = true;
					system("CLS");
					break;
				default:
					ChangingBool = false;
					system("CLS");
					break;
				}
			}
			break;
		case 8:
			std::system("CLS");
			std::cout << "=========================" << endl;
			std::cout << "1.Print Values" << endl;
			std::cout << "2.Change Values" << endl;
			std::cout << "3.Disable Updater" << endl;
			std::cout << "4.Enable Updater" << endl;
			std::cout << "5.Add Macro" << endl;
			std::cout << "6.Execute Macro" << endl;
			std::cout << "7.Back" << endl;
			std::cout << "=========================" << endl;
			std::cin >> Choice;
			switch (Choice)
			{
			case 1:
				std::cout << "=========================" << endl;
				std::cout << "1.Health: " << PC.GetHealth() << endl;
                std::cout << "2.Hunger: " << PC.GetHunger() << endl;
				std::cout << "3.Mana: " << PC.GetMana() << endl;
				std::cout << "4.Max Health: " << PC.GetMaxHealth() << endl;
				std::cout << "5.Max Mana: " << PC.GetMaxMana() << endl;
				std::cout << "6.Strength: " << PC.GetStrength() << endl;
				std::cout << "7.Constitution: " << PC.GetConstitution() << endl;
				std::cout << "8.Dexterity: " << PC.GetDexterity() << endl;
				std::cout << "9.Intelligence: " << PC.GetIntelligence() << endl;
				std::cout << "10.Wisdom: " << PC.GetWisdom() << endl;
				std::cout << "11.Charisma: " << PC.GetCharisma() << endl;
				std::cout << "12.Attunment: " << PC.GetAttunment() << endl;
				std::cout << "13.Stat Points: " << PC.GetStatPoints() << endl;
				std::cout << "14.Skill Points: " << PC.GetSkillPoints() << endl;
				std::cout << "15.Exp: " << PC.GetExp() << endl;
				std::cout << "16.Exp to Next Level: " << PC.GetExpNext() << endl;
				std::cout << "17.Level: " << PC.GetLevel() << endl;
				std::cout << "=========================" << endl;
				break;
			case 2:
				std::cout << "=========================" << endl;
				std::cout << "Type -1 to Exit" << endl;
				std::cout << "=========================" << endl;
				std::cin >> SubChoice;
				switch (SubChoice)
				{
				case -1:
					break;
				case 1:
					std::cin >> SubChoice;
					PC.SetHealth(SubChoice);
					break;
				case 2:
					std::cin >> SubChoice;
					PC.SetMana(SubChoice);
					break;
				case 3:
					std::cin >> SubChoice;
					PC.SetMaxHealth(SubChoice);
					break;
				case 4:
					std::cin >> SubChoice;
					PC.SetMaxMana(SubChoice);
					break;
				case 5:
					std::cin >> SubChoice;
					PC.SetStrength(SubChoice);
					break;
				case 6:
					std::cin >> SubChoice;
					PC.SetConstitution(SubChoice);
					break;
				case 7:
					std::cin >> SubChoice;
					PC.SetDexterity(SubChoice);
					break;
				case 8:
					std::cin >> SubChoice;
					PC.SetIntelligence(SubChoice);
					break;
				case 9:
					std::cin >> SubChoice;
					PC.SetWisdom(SubChoice);
					break;
				case 10:
					std::cin >> SubChoice;
					PC.SetCharisma(SubChoice);
					break;
				case 11:
					std::cin >> SubChoice;
					PC.SetAttunment(SubChoice);
					break;
				case 12:
					std::cin >> SubChoice;
					PC.SetStatPoints(SubChoice);
					break;
				case 13:
					std::cin >> SubChoice;
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
				system("CLS");
				cout << "=========================" << endl;
				cout << "         Macros          " << endl;
				cout << "=========================" << endl;
				cout << "1." << MacroName1 << endl;
				cout << "2." << MacroName2 << endl;
				cout << "3." << MacroName3 << endl;
				cout << "4." << MacroName4 << endl;
				cout << "5." << MacroName5 << endl;
				cout << "6.Exit" << endl;
				cout << "=========================" << endl;
				cout << "Warning Macros Cannot Be" << endl;
				cout << "Changed Untill Reset!" << endl;
				cout << "=========================" << endl;
				cin >> Choice;
				system("CLS");
				switch (Choice)
				{
				case 1:
					cout << "=========================" << endl;
					cout << "   Enter Name Of Macro   " << endl;
					cout << "=========================" << endl;
					cin >> StringChoice;
					MacroName1 = StringChoice;
					break;
				case 2:
					cout << "=========================" << endl;
					cout << "   Enter Name Of Macro   " << endl;
					cout << "=========================" << endl;
					cin >> StringChoice;
					MacroName2 = StringChoice;
					break;
				case 3:
					cout << "=========================" << endl;
					cout << "   Enter Name Of Macro   " << endl;
					cout << "=========================" << endl;
					cin >> StringChoice;
					MacroName3 = StringChoice;
					break;
				case 4:
					cout << "=========================" << endl;
					cout << "   Enter Name Of Macro   " << endl;
					cout << "=========================" << endl;
					cin >> StringChoice;
					MacroName4 = StringChoice;
					break;
				case 5:
					cout << "=========================" << endl;
					cout << "   Enter Name Of Macro   " << endl;
					cout << "=========================" << endl;
					cin >> StringChoice;
					MacroName5 = StringChoice;
					break;
				default:
					cout << "Invalid Choice" << endl;
					break;
				}
				system("CLS");
				break;
			case 6:
				break;
			case 7:
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