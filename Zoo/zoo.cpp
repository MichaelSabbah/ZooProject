#include "zoo.h"
#include "utils.h"

Zoo::Zoo(string zooName, vector<Animal*> animals, vector<Worker*> workers, vector<Visitor*> visitors)
{
	this->zooName = zooName;
	this->animals = animals;
	this->workers = workers;
	this->visitors = visitors;
}

Zoo::Zoo(string zooName)
{
	this->zooName = zooName;
}

Zoo::Zoo(const Zoo & other)
{

	*this = other;
}

Zoo::~Zoo()
{
}

const Zoo& Zoo::operator=(const Zoo & other)
{
	this->zooName = other.zooName;
	this->animals = other.animals;
	this->workers = workers;
	this->visitors = this->visitors;
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
	int salalriesSum = 0;
	vector<Worker*>::const_iterator workerIt = workers.begin();
	for (; workerIt != workers.end(); ++workerIt)
	{
		salalriesSum += (*workerIt)->getSalary();
	}
	return salalriesSum;
}

void Zoo::animalsAction() const
{
	vector<Animal*>::const_iterator it = animals.begin();
	for (; it != animals.end(); ++it)
	{
		(*it)->action();
	}
}

void Zoo::feedByWorkers() const
{
	vector<Worker*>::const_iterator workerIt = workers.begin();
	vector<Animal*>::const_iterator animalIt = animals.begin();
	for (; workerIt != workers.end(); ++workerIt)
	{
		for(; animalIt != animals.end(); ++animalIt)
		(*workerIt)->feedAnimal(*animalIt);
	}
}

void Zoo::feedByVisitors() const
{
	vector<Visitor*>::const_iterator visitorIt = visitors.begin();
	vector<Animal*>::const_iterator animalIt = animals.begin();
	for (; visitorIt != visitors.end(); ++visitorIt)
	{
		for (; animalIt != animals.end(); ++animalIt)
			(*visitorIt)->feedAnimal(*animalIt);
	}
}

void Zoo::addAnimal(Animal* animal)
{
	if (find(animals.begin(), animals.end(), animal) == animals.end())
		this->animals.push_back(animal);
	else
		cout << animal->getName() << " is already in the zoo." << endl;
}

void Zoo::addWorker(Worker* worker)
{
	if (find(workers.begin(), workers.end(), worker) == workers.end())
		this->workers.push_back(worker);
	else
		cout << "This worker is already work at the zoo." << endl;
}

void Zoo::addVisitor(Visitor* visitor)
{
	if (find(visitors.begin(), visitors.end(), visitor) == visitors.end())
		this->visitors.push_back(visitor);
	else
		cout << "This visitor is already entered to the zoo." << endl;
}

ostream & operator<<(ostream & os, const Zoo& set)
{
	os << set.zooName << ":" << endl;
	os << "------------";
	
	os << endl;
	//Print all animals
	os << "Nubmer of animals: " << set.animals.size() << endl;
	os << "Animals:" << endl;
	Utils::printVectorOfPointers(set.animals);

	os << endl;
	//Print all workers
	os << "Nubmer of workers: " << set.workers.size() << endl;
	os << "Workers:" << endl;
	Utils::printVectorOfPointers(set.workers);
	
	os << endl;
	//Print all visitors
	os << "Nubmer of visitors: " << set.visitors.size() << endl;
	os << "Visitors:" << endl;
	Utils::printVectorOfPointers(set.visitors);

	return os;
}

istream& operator>>(istream & is, const Zoo& set)
{
	is >> set.zooName;
	return is;
}