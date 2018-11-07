#pragma once

#include <vector>
#include <iostream>
using namespace std;

class Utils {
	public:
		template <class objectType>
		static void printVectorOfPointers(vector<objectType> objects);
};

template <class objectType>
void Utils::printVectorOfPointers(vector<objectType> objects)
{
	vector<objectType>::iterator it = objects.begin();
	for (; it != objects.end(); ++it)
	{
		cout << *(*it) << endl;
		cout << "\n" << endl;
	}
}