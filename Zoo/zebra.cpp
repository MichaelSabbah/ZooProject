#include "zebra.h"

Zebra::Zebra(string name, bool isHungry, int numOfStrips=0):Animal(name,isHungry)
{
	this->numOfStrips = numOfStrips;
}

Zebra::~Zebra()
{
}

int Zebra::getNumOfStrips() const
{
	return numOfStrips;
}

void Zebra::setNumOfStrips(int numOfStrips)
{
	this->numOfStrips = numOfStrips;
}

void Zebra::action() const
{
	this->cleanStrips();
}

void Zebra::eat() const
{
	cout << getName() << " is eating grass..." << endl;
}

void Zebra::cleanStrips() const
{
	cout << getName() << " is cleaning his stripes..." << endl;
}

Animal* Zebra::createBaby() const
{
	return new Zebra();
}
