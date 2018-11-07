#include "zebra.h"
#include "lion.h"
#include "monkey.h"
#include "manager.h"
#include "zoo.h"
#include "utils.h"

#include <vector>
using namespace std;

template <class objectType>
void printVectorOfPointers(vector<objectType> objects)
{
	vector<objectType>::iterator it = objects.begin();
	for (; it != objects.end(); ++it)
	{
		cout << *(*it) << endl;
		cout << "\n" << endl;
	}
}

void main()
{
	/*Animal* animalsCpipya;
	Zoo cpipya("Cpipya");
	Zoo javayia("Javayia");

	Zebra z1("hedva", false, 400);
	Lion l1("simba", true, true);
	Monkey m1("miko", true, 30);
	Monkey m2("miki", true, 24);

	cpipya.addAnimal(z1);
	cpipya.addAnimal(l1);
	cpipya.addAnimal(m1);
	cpipya.addAnimal(m2);

	javayia.addAnimal(Zebra("rivka", true, 200));
	javayia.addAnimal(Lion("nala", true, true));

	Worker* moti = new RegularWorker(2, "moti", 11, 1);
	cpipya.addWorker(*moti);
	Manager* haim = new Manager(1, "haim", 20);
	cpipya.addWorker(*haim);
	haim->hireNewWorker(*moti);

	Worker* barak = new RegularWorker(1, "barak", 9, 2);
	javayia.addWorker(*barak);
	Manager* yossi = new Manager(2, "yossi", 20);
	javayia.addWorker(*yossi);
	yossi->hireNewWorker(*barak);

	Visitor* v1 = new Visitor(1, "inbar", 9);
	Visitor* v2 = new Visitor(2, "bob", 10);

	cpipya.addVisitor(*v1);
	javayia.addVisitor(*v2);

	cpipya.feedByWorkers();

	v1->feedAnimal(m1);

	cpipya.animalsAction();

	Worker* rookie = new RegularWorker(4, "rookie", 4, 0);
	cpipya.addWorker(*rookie);
	haim->hireNewWorker(*rookie);

	if (cpipya == javayia)
	{
		cout << "Same Amount of Animals";
	}
	else if (cpipya > javayia)
	{
		cout << "Cpipya has More Animals";

	}
	else
	{
		cout << "Javayia has More Animals";

	}
	cpipya.addAnimal(*(m1 + m2));

	cout << cpipya << endl;

	Worker w1(100, "Moshe", 1000);
	Worker w2(200, "Dani", 2000);*/

	vector<Animal*> animals;
	Monkey m("Dani",false,1);
	Monkey m1("Yossi", false, 2);
	animals.push_back(&m);
	animals.push_back(&m1);
	Utils::printVectorOfPointers(animals);
}

