#pragma once
#include "animal.h"

#include <string>
#include <iostream>
using namespace std;

class Monkey : public Animal
{
public:
	Monkey(string name="", bool isHungry=true, int climbingSpeed=0);
	~Monkey();

	int getClimbingSpeed()const;
	void setClimbingSpeed(int climbingSpeed);

	virtual void action() const;
	virtual void eat() const;
	void climbOnTree()const;

	virtual void toOs(ostream& os) const;
	virtual Animal* operator+(const Animal& other) const;
	virtual const Animal& operator=(const Animal& other);
private:
	int climbingSpeed;
};