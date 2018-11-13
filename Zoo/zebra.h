#pragma once
#include "animal.h"

#include <string>
#include <iostream>
using namespace std;

class Zebra: public Animal
{
public:
	Zebra(string name="", bool isHungry=true, int numOfStrips=0);
	~Zebra();

	int getNumOfStrips()const;
	void setNumOfStrips(int numOfStrips);

	virtual void action() const;
	virtual void eat() const;
	void cleanStrips() const;

	virtual void toOs(ostream& os) const;
	virtual Animal* operator+(const Animal& other) const;
	virtual const Animal& operator=(const Animal& other);
private:
	int numOfStrips;
};