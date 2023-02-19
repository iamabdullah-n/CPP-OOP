#include "Keyboard.h"

Keyboard::Keyboard()
{
	name = nullptr;
	number = 0;
	price = 0;
}

Keyboard::Keyboard(const char* n, int num, float p)
{
	int len = 0;
	for (len = 0; n[len] != '\0'; len++);
	name = new char[len + 1];
	for (int i = 0; i < len; i++)
		name[i] = n[i];
	name[len] = '\0';

	number = num;

	price = p;
}

void Keyboard::setKeyboard(const char* n, int num, float p)
{
	int len = 0;
	for (len = 0; n[len] != '\0'; len++);
	name = new char[len + 1];
	for (int i = 0; i < len; i++)
		name[i] = n[i];
	name[len] = '\0';

	number = num;

	price = p;
}

void Keyboard::displayKeyboard()
{
	cout << "Company Name : " << name << endl;
	cout << "Number of Keys : " << number << endl;
	cout << "Price : " << price << endl;
}

Keyboard::~Keyboard()
{
	delete[] name;
	name = nullptr;
}