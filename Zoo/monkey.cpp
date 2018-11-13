#include "monkey.h"

Monkey::Monkey(string name, bool isHungry, int climbingSpeed):Animal(name,isHungry)
{
	this->climbingSpeed = climbingSpeed;
}

Monkey::~Monkey()
{
}

int Monkey::getClimbingSpeed() const
{
	return climbingSpeed;
}

void Monkey::setClimbingSpeed(int climbingSpeed)
{
	this->climbingSpeed = climbingSpeed;
}

void Monkey::action() const
{
	this->climbOnTree();
}

void Monkey::eat() const
{
	cout << getName() << " is eating bananas..." << endl;
}

void Monkey::climbOnTree() const
{
	cout << getName() << " is climbing on the tree..." << endl;
}

Animal* Monkey::operator+(const Animal& other) const
{
	Animal* babyAnimal = nullptr;
	if (typeid(*this) != typeid(other)) {
		cout << "This can't be happen!" << endl;
	}
	else {
		babyAnimal = new Monkey();
		cout << "Monkey baby is born" << endl;
	}
	return babyAnimal;
}

void Monkey::toOs(ostream& os) const
{
	cout << ", climbing speed: " << climbingSpeed;
}

const Animal& Monkey::operator=(const Animal& other)
{
	Animal::operator=(other);
	this->climbingSpeed = dynamic_cast<Monkey*>((const_cast<Animal*>(&other)))->climbingSpeed;
	return *this;
}
