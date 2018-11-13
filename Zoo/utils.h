#pragma once

#include <vector>
#include <iostream>
#include <string>
#include <ctime>
#include <time.h>
using namespace std;

class Utils {
	public:
		template <class objectType>
		static void printVectorOfPointers(vector<objectType> objects);

		static void printTimeAsString(tm* time)
		{
			cout << 1 + time->tm_hour << ":";
			cout << 1 + time->tm_min << ":";
			cout << 1 + time->tm_sec;
		}
};

template <class objectType>
void Utils::printVectorOfPointers(vector<objectType> objects)
{
	vector<objectType>::iterator it = objects.begin();
	for (; it != objects.end(); ++it)
	{
		cout << *(*it);
	}
}



