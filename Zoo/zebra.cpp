#include "zebra.h"

Zebra::Zebra(string name, bool isHungry, int numOfStrips):Animal(name,isHungry)
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

Animal* Zebra::operator+(const Animal& other) const
{
	Animal* babyAnimal = nullptr;
	if (typeid(*this) != typeid(other)) {
		cout << "This can't be happen!" << endl;
	}
	else {
		babyAnimal = new Zebra();
		cout << "Zebra baby is born" << endl;
	}
	return babyAnimal;
}

void Zebra::toOs(ostream& os) const
{
	os << ", Number of stripes: " << numOfStrips;
}

const Animal& Zebra::operator=(const Animal& other)
{
	Animal::operator=(other);
	this->numOfStrips = dynamic_cast<Zebra*>((const_cast<Animal*>(&other)))->numOfStrips;
	return *this;
}