#pragma once
#include <iostream>
using namespace std;

class Cpu
{
	char* name;
	int speed;
	float price;
public:
	Cpu();
	Cpu(const char* n, int s, float p);
	void setCpu(const char* n, int s, float p);
	void displayCpu();
	~Cpu();
};

