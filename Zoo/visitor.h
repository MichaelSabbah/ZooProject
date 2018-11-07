#pragma once
#include "person.h"

#include <string>
#include <iostream>
#include <ctime>
using namespace std;

class Visitor : public Person
{
public:
	Visitor(int id, string name, int arrived);
	~Visitor();

	time_t getArrived() const;
	void setArrived(time_t arrived);

	virtual void feedAnimal(Animal& animal) const override;
	void buyInKiosk() const;
private:
	time_t arrived;
};