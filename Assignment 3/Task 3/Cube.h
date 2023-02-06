#pragma once
#include "ThreeDShape.h"
class Cube : public ThreeDShape
{
public:
	Cube();
	Cube(int s);
	void displayCube();
	~Cube();
};