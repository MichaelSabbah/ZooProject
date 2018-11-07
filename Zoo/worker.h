#pragma once
#include "person.h"

#include <string>
#include <iostream>
using namespace std;

class Worker : public Person
{
public:
	Worker(int id=0, string name="", int salary=0);
	~Worker();

	int getSalary() const;
	void setSalary(int salary);

	virtual void feedAnimal(Animal& animal) const override;
	int operator+(const Worker& other);
private:
	int salary;
};