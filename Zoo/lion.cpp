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

Animal* Lion::operator+(const Animal& other) const
{
	Animal* babyAnimal = nullptr;
	if (typeid(*this) != typeid(other)) {
		cout << "This can't be happen!" << endl;
	}
	else {
		babyAnimal = new Lion();
		cout << "Lion baby is born" << endl;
	}
	return babyAnimal;
}

void Lion::toOs(ostream& os) const
{
	if (isGroupLeader)
		os << ", group leader";
}

const Animal& Lion::operator=(const Animal& other)
{
	Animal::operator=(other);
	this->isGroupLeader = dynamic_cast<Lion*>((const_cast<Animal*>(&other)))->isGroupLeader;
	return *this;
}
