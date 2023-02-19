#pragma once
#include <iostream>
using namespace std;

class Monitor
{
	char* name;
	int size;
	float price;

public:
	Monitor();
	Monitor(const char* n, int s, float p);
	void setMonitor(const char* n, int s, float p);
	void displayMonitor();
	~Monitor();
};

