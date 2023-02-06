#pragma once
#include "ThreeDShape.h"
class Sphere : public ThreeDShape
{
public:
	Sphere();
	Sphere(int s);
	void displaySphere();
	~Sphere();
};