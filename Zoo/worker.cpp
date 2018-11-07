#include "worker.h"

Worker::Worker(int id, string name, int salary):Person(id,name)
{
	this->salary = salary;
}

Worker::~Worker()
{
}

int Worker::getSalary() const
{
	return salary;
}

void Worker::setSalary(int salary)
{
	this->salary = salary;
}

void Worker::feedAnimal(Animal& animal) const
{
	if (animal.getIsHungry()) {
		animal.eat();
		cout << "The animal " << animal.getName() << " has feeded." << endl;
		animal.setIsHungry(false);
	}
	else {
		cout << "The animal " << animal.getName() << " is not hungry." << endl;
	}
}

int Worker::operator+(const Worker & other)
{
	return (this->salary + other.salary);
}
