#pragma once
#include "A.h"

class B
{
	char* lastName;
	A* obj;

public:
	B();
	B(char* n, A* a);
	void setB(char* n, A* a);
	char* getB();
	void display();
};