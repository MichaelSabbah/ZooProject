#pragma once

#include "worker.h"
#include "animal.h"

#include <string>
using namespace std;

class RegularWorker : public Worker
{
public:
	RegularWorker(int id, string name, int salary, int experiance);
	RegularWorker(const Worker& worker, int experiance);
	~RegularWorker();

	int getExperiance() const;
	void setExperiance(int experiance);
	
	void clearAnimalCage(Animal& animal) const;

	void workerToOs(ostream& os) const;

private:
	int experiance;
};