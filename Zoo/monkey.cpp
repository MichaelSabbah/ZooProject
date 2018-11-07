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

Animal* Monkey::createBaby() const
{
	return new Monkey();
}

void Monkey::toOs(ostream& os) const
{
	cout << ", climbing speed: " << climbingSpeed << endl;
}
