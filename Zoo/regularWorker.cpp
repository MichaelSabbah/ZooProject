#include "regularWorker.h"

RegularWorker::RegularWorker(int id, string name, int salary, int experiance):Worker(id,name,salary)
{
	this->experiance = experiance;
}

RegularWorker::RegularWorker(const Worker& worker, int experiance):Worker(worker)
{
	this->experiance = experiance;
}


RegularWorker::~RegularWorker()
{
}

int RegularWorker::getExperiance() const
{
	return experiance;
}

void RegularWorker::setExperiance(int experiance)
{
	this->experiance = experiance;
}

void RegularWorker::clearAnimalCage(Animal& animal) const
{
	cout << "The cage of " << animal.getName() << " has cleaned." << endl;
}

void RegularWorker::workerToOs(ostream& os) const
{
	os << ", Experience: " << experiance;
}