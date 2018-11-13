#pragma once
#pragma warning(disable : 4996)
#include "person.h"
#include "utils.h"
#include <string>
#include <iostream>
#include <ctime>
using namespace std;

class Visitor : public Person
{
public:
	Visitor(int id, string name, time_t arrived);
	~Visitor();

	time_t getArrived() const;
	void setArrived(time_t arrived);

	virtual void feedAnimal(Animal* animal) const;
	void buyInKiosk() const;

	virtual void toOs(ostream& os) const;
private:
	time_t arrived;
};