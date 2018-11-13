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

const Person & Person::operator=(const Person& other)
{
	this->id = other.id;
	this->name = other.name;
	return *this;
}

bool Person::operator==(const Person& other) const
{
	return this->id == other.id;
}

ostream& operator<<(ostream& os, const Person& person) 
{
	os << "Id: " << person.getId() << ", Name: " << person.getName();
	person.toOs(os);
	os << endl;
	return os;
}

void Person::toOs(ostream& os) const{}