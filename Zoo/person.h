#pragma once
#include "animal.h"

#include <string>
using namespace std;

class Person
{
public:
	Person(int id=0, string = "");
	Person(const Person& other);
	virtual ~Person();

	string getName() const;
	void setName(string name);
	int getId() const;
	void setId(	int id);
	virtual void feedAnimal(Animal& animal) const = 0;

	const Person& operator=(const Person& other);

private:
	int id;
	string name;
};