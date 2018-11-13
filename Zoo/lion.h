#pragma once
#include "animal.h"

#include <string>
#include <iostream>
using namespace std;

class Lion : public Animal
{
public:
	Lion(string name = "", bool isHungry = true, bool isGroupLeader = false);
	~Lion();

	bool getIsGroupLeader() const;
	void settIsGroupLeader(bool isGroupLeader);

	virtual void action() const;
	virtual void eat() const;
	void nourishMane()const;

	virtual void toOs(ostream& os) const;
	virtual Animal* operator+(const Animal& other) const;
	virtual const Animal& operator=(const Animal& other);
private:
	bool isGroupLeader;
};