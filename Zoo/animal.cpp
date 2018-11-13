#include "animal.h"

Animal::Animal(string name, bool isHungry)
{
	this->name = name;
	this->isHungry = isHungry;
}

Animal::Animal(const Animal & other)
{
	this->name = name;
	this->isHungry = isHungry;
}

Animal::~Animal()
{
}

string Animal::getName() const
{
	return name;
}

void Animal::setName(string name)
{
	this->name = name;
}

bool Animal::getIsHungry() const
{
	return isHungry;
}

void Animal::setIsHungry(bool isHungry)
{
	this->isHungry = isHungry;
}

void Animal::toOs(ostream& os) const 
{
	//Empty, used for polymorphism
}

const Animal& Animal::operator=(const Animal & other)
{
	this->name = other.name;
	this->isHungry = other.isHungry;
	return *this;
}
ostream& operator<<(ostream& os, const Animal& animal)
{
	string hungry = "hungry";
	if (!animal.isHungry)
		hungry = "not" + hungry;

	os << "(" << (typeid(animal).name() + 6) << ") " << "name: " << animal.name << ", is " << hungry;
	animal.toOs(os);
	os << endl;
	return os;
}

