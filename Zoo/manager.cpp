#include "manager.h"

Manager::Manager(int id, string name, int salary, vector<Worker> subordinates):Worker(id,name,salary)
{
	this->subordinates.swap(subordinates);
}

Manager::Manager(int id, string name, int salary):Worker(id,name,salary)
{
}

Manager::Manager(const Manager & other):Worker(other.getId,other.getName,other.getSalary)
{
	this->subordinates.swap(subordinates);
}

Manager::~Manager()
{
}

const Manager & Manager::operator=(const Manager & other)
{
	return *this;
}

void Manager::hireNewWorker(const Worker& worker)
{
	if (find(subordinates.begin, subordinates.end, worker) != subordinates.end)
		this->subordinates.push_back(worker);
	else
		cout << "You already hired this worker.";
}


