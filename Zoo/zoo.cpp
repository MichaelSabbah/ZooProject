#include "zoo.h"

Zoo::Zoo(string zooName, vector<Animal> animals, vector<Worker> workers, vector<Visitor> visitors)
{
}

Zoo::Zoo(string zooName)
{
}

Zoo::Zoo(const Zoo & other)
{
}

Zoo::~Zoo()
{
}

const Zoo & Zoo::operator=(const Zoo & other)
{
	return *this;
}

bool Zoo::operator==(const Zoo & other) const
{
	return this->animals.size() == other.animals.size();
}

bool Zoo::operator>(const Zoo & other) const
{
	return this->animals.size() > other.animals.size();
}

int Zoo::workersSalaries() const
{
	return 0;
}

void Zoo::animalsAction() const
{
}

void Zoo::feedByWorkers() const
{
}

void Zoo::feedByVisitors() const
{
}

void Zoo::addAnimal(Animal* animal)
{
	if (find(animals.begin(), animals.end(), animal) != animals.end())
		this->animals.push_back(animal);
	else
		cout << animal->getName() << " is already in the zoo." << endl;
}

void Zoo::addWorker(const Worker& worker)
{
	if (find(workers.begin(), workers.end(), worker) != workers.end())
		this->workers.push_back(worker);
	else
		cout << "This worker is already work at the zoo." << endl;
}

void Zoo::addVisitor(const Visitor& visitor)
{
	if (find(visitors.begin(), visitors.end(), visitor) != visitors.end())
		this->visitors.push_back(visitor);
	else
		cout << "This visitor is already entered to the zoo." << endl;
}

ostream & operator<<(ostream & os, const Zoo & set)
{
	return os;
}

istream & operator >> (istream & is, const Zoo & set)
{
	return is;
}
