#include "Cpu.h"

Cpu::Cpu()
{
	name = nullptr;
	speed = 0;
	price = 0;
}

Cpu::Cpu(const char* n, int s, float p)
{
	int len = 0;
	for (len = 0; n[len] != '\0'; len++);
	name = new char[len + 1];
	for (int i = 0; i < len; i++)
		name[i] = n[i];
	name[len] = '\0';

	speed = s;

	price = p;
}

void Cpu::setCpu(const char* n, int s, float p)
{
	int len = 0;
	for (len = 0; n[len] != '\0'; len++);
	name = new char[len + 1];
	for (int i = 0; i < len; i++)
		name[i] = n[i];
	name[len] = '\0';

	speed = s;

	price = p;
}

void Cpu::displayCpu()
{
	cout << "Company Name : " << name << endl;
	cout << "Speed : " << speed << endl;
	cout << "Price : " << price << endl;
}

Cpu::~Cpu()
{
	delete[] name;
	name = nullptr;
}