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
	virtual Animal* createBaby() const;

	void nourishMane()const;
private:
	bool isGroupLeader;
};