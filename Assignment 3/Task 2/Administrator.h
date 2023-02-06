#pragma once
#include "Faculty.h"

class Administrator : public Faculty
{
public:
	Administrator();
	Administrator(char* n, int i);
	void displayAdministrator();
};