#pragma once
#include "ThreeDShape.h"
class Cuboid : public ThreeDShape
{
public:
	Cuboid();
	Cuboid(int s);
	void displayCuboid();
	~Cuboid();
};