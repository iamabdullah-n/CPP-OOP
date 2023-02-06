#pragma once
#include "ThreeDShape.h"
class Cylinder : public ThreeDShape
{
public:
	Cylinder();
	Cylinder(int s);
	void displayCylinder();
	~Cylinder();
};