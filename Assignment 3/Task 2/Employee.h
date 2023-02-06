#pragma once
#include "Community.h"

class Employee : public Community
{
public:
	Employee();
	Employee(char* n, int i);
	void displayEmployee();
};