#pragma once
#include "Community.h"

class Alumnis : public Community
{
public:
	Alumnis();
	Alumnis(char* n, int i);
	void displayAlumni();
};