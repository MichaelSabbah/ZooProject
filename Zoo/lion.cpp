#include "lion.h"

Lion::Lion(string name, bool isHungry, bool isGroupLeader):Animal(name,isHungry)
{
	this->isGroupLeader = isGroupLeader;
}

Lion::~Lion()
{
}

bool Lion::getIsGroupLeader() const
{
	return isGroupLeader;
}

void Lion::settIsGroupLeader(bool isGroupLeader)
{
	this->isGroupLeader = isGroupLeader;
}

void Lion::action() const
{
	this->nourishMane();
}

void Lion::eat() const
{
	cout << getName() << " is eating meat..." << endl;
}

void Lion::nourishMane() const
{
	cout << getName() << " is nourish his mane..." << endl;
}

Animal* Lion::createBaby() const
{
	return new Lion();
}
