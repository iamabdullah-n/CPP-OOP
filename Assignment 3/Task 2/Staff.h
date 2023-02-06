#pragma once
#include "Employee.h"

class Staff : public Employee
{
public:
	Staff();
	Staff(char* n, int i);
	void displayStaff();
};