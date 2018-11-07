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
	virtual Animal* createBaby() const;

	void cleanStrips() const;
private:
	int numOfStrips;
};