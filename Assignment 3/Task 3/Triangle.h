#pragma once
#include "TwoDShape.h"

class Triangle : public TwoDShape
{
public:
	Triangle();
	Triangle(int s);
	void displayTriangle();
	~Triangle();
};