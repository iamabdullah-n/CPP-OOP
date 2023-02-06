#pragma once
#include "Community.h"

class Student : public Community
{
public:
	Student();
	Student(char* n, int i);
	void displayStudent();
};