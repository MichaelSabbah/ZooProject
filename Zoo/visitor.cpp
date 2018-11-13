#include "visitor.h"

Visitor::Visitor(int id, string name, time_t arrived):Person(id,name)
{
	this->arrived = arrived;
}

Visitor::~Visitor()
{
	cout << this->getName() << " has left the zoo. He was here from" << this->getArrived() << endl;
}

time_t Visitor::getArrived() const
{
	return arrived;
}

void Visitor::setArrived(time_t arrived)
{
	this->arrived = arrived;
}

void Visitor::feedAnimal(Animal* animal) const
{
	if (animal->getIsHungry()) {
		animal->eat();
		cout << "The animal " << animal->getName() << " has feeded." << endl;
		animal->setIsHungry(false);
	}
	else {
		cout << "The animal " << animal->getName() << " is not hungry." << endl;
	}
}

void Visitor::buyInKiosk() const
{
	cout << "The visitor " << getName() << " has bought in the kiosk." << endl;
}

void Visitor::toOs(ostream& os) const
{
	tm* arrivedTime = localtime(&arrived);
	os << ", Arrived at: ";
	Utils::printTimeAsString(arrivedTime);
}