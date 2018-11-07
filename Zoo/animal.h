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
	virtual Animal* createBaby() const = 0;

	const Animal& operator=(const Animal& other);
	Animal* operator+(const Animal& other) const;
	virtual bool operator==(const Animal& other) const;
	virtual void toOs(ostream& os) const;
	friend ostream& operator<<(ostream& os, const Animal& animal);

private:
	string name;
	bool isHungry;
};