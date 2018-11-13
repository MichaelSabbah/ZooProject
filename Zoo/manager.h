#pragma once
#include "worker.h"
#include "regularWorker.h"

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

class Manager : public Worker
{
public:
	Manager(int id, string name, int salary, vector<Worker> subordinates);
	Manager(int id, string name, int salary);
	Manager(const Manager& other);
	~Manager();

	const Manager& operator=(const Manager& other);
	void workerToOs(ostream& os) const;
	
	void hireNewWorker(const Worker& worker);
private:
	vector<Worker> subordinates;
};