#pragma once
#include <iostream>

class Animal
{
public:
	//Constructor in ClassDef
	Animal(std::string nm = "Animal" , double hght = 0, double wght = 0) : name(nm), height(hght), weight(wght)//init member list
	{
		numOfAnimals++;
	}

	//Public methoden
	//Getter und Setter
	std::string getName();//nur Funktionskopf
	void setName(std::string); //nur Funktionskopf

	double getWeight() { return weight; }//in Class deklaration
	void setWeight(double wght) //in Class deklaration (s.u.)
	{
		this->weight = wght;
	}
	double getHeight() { return height; }//in ClassDef deklaration
	void setHeight(double hght) //in ClassDef deklaration (s.u.)
	{
		height = hght;
	}

	void SetNameWeightHeight(std::string nm, double wght, double hght)
	{
		name = nm;		//zulaessig, weil name nicht als argument ist
		(*this).weight = wght; //pointer this
		this->height = hght;	//alternative schreibweise pointer-arrow ->
	}

	static int GetNumOfAnimals()//only static methods can access static fields
	{
		return numOfAnimals;
	}
	void ausgeben()
	{
		std::cout << "\n" << name << " is " << height << " cm in height and " << weight << " kg heavy.\n";
	}

	//Destructor
	~Animal();
private:				//nur von eigenclass oder friend class 
	std::string name;
	double height;
	double weight;
protected:
	//all classes have the same variable shared
	static int numOfAnimals;

};
