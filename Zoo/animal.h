#pragma once

#include <string>
#include <iostream>
using namespace std;

class Animal
{
public:
	Animal(string name="", bool isHungry=true);
	Animal(const Animal& other);
	virtual ~Animal();

	string getName() const;
	void setName(string name);
	bool getIsHungry() const;
	void setIsHungry(bool isHungry);

	virtual void action() const = 0;
	virtual void eat() const = 0;	

	virtual const Animal& operator=(const Animal& other);
	virtual Animal* operator+(const Animal& other) const = 0;

	friend ostream& operator<<(ostream& os, const Animal& animal);
	virtual void toOs(ostream& os) const;

private:
	string name;
	bool isHungry;
};