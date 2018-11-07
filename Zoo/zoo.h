#pragma once
#include "animal.h"
#include "worker.h"
#include "manager.h"
#include "visitor.h"
#include <iostream>
using namespace std;

#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Zoo
{
public:
	Zoo(string zooName, vector<Animal> animals, vector<Worker> workers, vector<Visitor> visitors);
	Zoo(string zooName);

	Zoo(const Zoo& other);
	~Zoo();

	const Zoo& operator=(const Zoo& other);
	bool operator==(const Zoo& other)const;
	bool operator>(const Zoo& other)const;
	friend ostream& operator<<(ostream& os, const Zoo& set);
	friend istream& operator>>(istream& is, const Zoo& set);

	int workersSalaries() const;
	void animalsAction() const;
	void feedByWorkers() const;
	void feedByVisitors() const;
	void addAnimal(Animal* animal);
	void addWorker(const Worker& worker);
	void addVisitor(const Visitor& visitor);

private:
	string zooName;
	vector<Animal*> animals;
	vector<Worker> workers;
	vector<Visitor> visitors;
};