#include "Monitor.h"

Monitor::Monitor()
{
	name = nullptr;
	size = 0;
	price = 0;
}

Monitor::Monitor(const char* n, int s, float p)
{
	int len = 0;
	for (len = 0; n[len] != '\0'; len++);
	name = new char[len + 1];
	for (int i = 0; i < len; i++)
		name[i] = n[i];
	name[len] = '\0';

	size = s;

	price = p;
}

void Monitor::setMonitor(const char* n, int s, float p)
{
	int len = 0;
	for (len = 0; n[len] != '\0'; len++);
	name = new char[len + 1];
	for (int i = 0; i < len; i++)
		name[i] = n[i];
	name[len] = '\0';

	size = s;

	price = p;
}

void Monitor::displayMonitor()
{
	cout << "Company Name : " << name << endl;
	cout << "Size : " << size << endl;
	cout << "Price : " << price << endl;
}

Monitor::~Monitor()
{
	delete[] name;
	name = nullptr;
}