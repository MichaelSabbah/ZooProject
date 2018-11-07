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

const Animal & Animal::operator=(const Animal & other)
{
	return *this;
}

Animal* Animal::operator+(const Animal & other) const
{
	Animal* babyAnimal = nullptr;
	if (typeid(this) != typeid(other)) {
		cout << "This can't be happen!" << endl;
	}
	else {
		babyAnimal = this->createBaby();
		cout << "Baby born" << endl;
	}
	return babyAnimal;
}

ostream& operator<<(ostream& os, const Animal& animal)
{
	os << "name: " << animal.name;
	animal.toOs(os);
	return os;
}

bool Animal::operator==(const Animal& other) const
{
	return false;
}


