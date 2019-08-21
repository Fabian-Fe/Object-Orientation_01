#include "Animal.h"

//Destructor out of classDef
Animal::~Animal()
{
	numOfAnimals--;
	std::cout << "\n" << name << " destroyed!\n";
}

//methode out of ClassDef
std::string Animal::getName()
{
	return name;
}

void Animal::setName(std::string nm)
{
	name = nm;
}

int Animal::numOfAnimals = 0;