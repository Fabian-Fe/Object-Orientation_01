#include <iostream>
#include "Dog.h"





int main()
{
	Animal fred;
	std::cout<< fred.getName()<< "\n";
	fred.SetNameWeightHeight("Fred",15,30);
	fred.ausgeben();
	Animal animal2;
	{
		Animal animal3("Animal3");
		std::cout << animal2.GetNumOfAnimals() << "\n";
	}	//animal 2 wird out of scope zerstoert
	std::cout << animal2.GetNumOfAnimals() << "\n";

	Dog Rocky;
	Rocky.toggleStoeckchenGeholt();
	Rocky.toggleStoeckchenGeholt();
	Rocky.toggleStoeckchenGeholt();
	Rocky.toggleStoeckchenGeholt();
	Rocky.toggleStoeckchenGeholt();
	
	std::cout << animal2.GetNumOfAnimals() << "\n";
}

