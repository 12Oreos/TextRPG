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
	int v_Health;
	int v_Mana;
	int v_MaxHealth;
	int v_MaxMana;

public:
	//Acessors
	int GetMaxHealth() { return v_MaxHealth; } //Returns Max Health Integar
	int GetMaxMana() { return v_MaxMana; } //Returns Max Mana Integar
	int GetHealth() { return v_Health; } //Returns Health Integar
	int GetMana() { return v_Mana; } //Returns Mana Integar
//Modifers

	void SetHealth(int Health) {
		v_Health = Health;
	}
	//Changes Health Value

	void SetMana(int Mana) {
		v_Mana = Mana;
	}
	//Changes Mana Value	
	void SetMaxHealth(int MaxHealth) {
		v_MaxHealth = MaxHealth;
	}
	//Changes Max Health Value

	void SetMaxMana(int MaxMana) {
		v_MaxMana = MaxMana;
	}

	void PrintMainMenu()
	{

		//'Player Character'


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
	//Character Intilizer
	Character()
	{
		v_MaxMana = 10;//10 is a place holder
		v_MaxHealth = 10; //10 is a place holder
		v_Health = 0; //0 is a place holder
		v_Mana = 0; //0 is a place holder
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
        ChangingVariable = rand() % (PC.GetMaxHealth()/2) + PC.GetHealth();
        ChangingVariable2 = rand() % (PC.GetMaxMana()/2) + PC.GetMana();
        PC.SetHealth(ChangingVariable);
        PC.SetMana(ChangingVariable2);
        if (PC.GetHealth() > PC.GetMaxHealth())
        {
          PC.SetHealth(PC.GetMaxHealth());
        }
        if (PC.GetMana() > PC.GetMaxMana())
        {
          PC.SetMana(PC.GetHealth());
        }
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
      system("CLS");
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

