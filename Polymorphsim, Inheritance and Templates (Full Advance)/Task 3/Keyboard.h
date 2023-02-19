#pragma once
#include <iostream>
using namespace std;

class Keyboard
{
	char* name;
	int number;
	float price;

public:
	Keyboard();
	Keyboard(const char* n, int num, float p);
	void setKeyboard(const char* n, int num, float p);
	void displayKeyboard();
	~Keyboard();
};

