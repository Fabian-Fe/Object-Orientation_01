#pragma once
#include "Animal.h"
class Dog :	public Animal //public übernimmt Zugriffsberechtignungen für public und private members
						//bei class Dog : protected Animal könnten die member der SuperKlasse (bei dem Objekt) nicht mehr
						//public abgerufen werden!!!!
{
public:
	//Constructor
	Dog(std::string nm = "animal", double hght = 0, double wght = 0, std::string snd = "woof") :Animal(nm, hght, wght)
	{
		sound = snd;
		std::cout << "Dog with name " << this->getName() << " erstellt!\n";
	}
	void toggleStoeckchenGeholt();
	bool getStoeckchenGeholt();
	void setSound(std::string snd);
	std::string getSound();

	~Dog();

private:
	std::string sound;
	bool stoeckchenGeholt = false;
};

