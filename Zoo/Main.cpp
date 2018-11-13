#include "zebra.h"
#include "lion.h"
#include "monkey.h"
#include "manager.h"
#include "zoo.h"
#include "utils.h"

#include <ctime>
#include <vector>
using namespace std;

void main()
{
	Animal* animalsCpipya;
	Zoo* cpipya = new Zoo("Cpipya");
	Zoo* javayia = new Zoo("Javayia");

	Zebra* z1 = new Zebra("hedva", false, 400);
	Lion* l1 = new Lion("simba", true, true);
	Monkey* m1 = new Monkey("miko", true, 30);
	Monkey* m2 = new Monkey("miki", true, 24);

	cpipya->addAnimal(z1);
	cpipya->addAnimal(l1);
	cpipya->addAnimal(m1);
	cpipya->addAnimal(m2);

	javayia->addAnimal(new Zebra("rivka", true, 200));
	javayia->addAnimal(new Lion("nala", true, true));

	Worker* moti = new RegularWorker(2, "moti", 11, 1);
	cpipya->addWorker(moti);
	Manager* haim = new Manager(1, "haim", 20);
	cpipya->addWorker(haim);
	haim->hireNewWorker(*moti);

	Worker* barak = new RegularWorker(1, "barak", 9, 2);
	javayia->addWorker(barak);
	Manager* yossi = new Manager(2, "yossi", 20);
	javayia->addWorker(yossi);
	yossi->hireNewWorker(*barak);

	Visitor* v1 = new Visitor(1, "inbar", time(0));
	Visitor* v2 = new Visitor(2, "bob", time(0));

	cpipya->addVisitor(v1);
	javayia->addVisitor(v2);

	cpipya->feedByWorkers();

	v1->feedAnimal(m1);

	cpipya->animalsAction();

	Worker* rookie = new RegularWorker(4, "rookie", 4, 0);
	cpipya->addWorker(rookie);
	haim->hireNewWorker(*rookie);

	if (cpipya == javayia)
	{
		cout << "Same Amount of Animals" << endl;
	}
	else if (cpipya > javayia)
	{
		cout << "Cpipya has More Animals" << endl;

	}
	else
	{
		cout << "Javayia has More Animals" << endl;

	}
	cpipya->addAnimal((*m1 + *m2));

	cout << endl;

	cout << *cpipya << endl;
}

