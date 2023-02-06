#pragma once
#include "Administrator.h"
#include "Teacher.h"

class AdminTeacher : public Administrator, public Teacher
{
public:
	AdminTeacher();
	AdminTeacher(char* n, int roll);
	void displayAdmin();
};