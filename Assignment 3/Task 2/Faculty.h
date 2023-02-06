#pragma once
#include "Employee.h"

class Faculty : public Employee
{
public:
	Faculty();
	Faculty(char* n, int i);
	void displayFaculty();
};