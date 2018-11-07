#include "person.h"

Person::Person(int id, string name)
{
	this->id = id;
	this->name = name;
}

Person::Person(const Person & other)
{
	this->id = id;
	this->name = name;
}

Person::~Person()
{
}

string Person::getName() const
{
	return name;
}

void Person::setName(string name)
{
	this->name = name;
}

int Person::getId() const
{
	return id;
}

void Person::setId(int id)
{
	this->id = id;
}

const Person & Person::operator=(const Person & other)
{
	return *this;
}
