#include "Dog.h"
#include <iostream>


void Dog::toggleStoeckchenGeholt() //ohne Dog:: kein zugriff auf private
{
	switch (stoeckchenGeholt)
	{
	case(0):
		stoeckchenGeholt = true;
		std::cout << getName() << " hat Stoeckchen geholt!\n";
		break;
	default:
		stoeckchenGeholt = false;
		std::cout << "Stoeckchen fallen gelassen!\n";

	}
}

bool Dog::getStoeckchenGeholt()
{
	return stoeckchenGeholt;
}
void Dog::setSound(std::string snd) 
{
	sound = snd;
}
std::string Dog::getSound() 
{
	return sound;
}

Dog::~Dog() 
{
	this->numOfAnimals--;
	std::cout << "Wauuuuuuu!";
}
