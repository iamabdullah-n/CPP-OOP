#pragma once
#include "TwoDShape.h"

class Circle : public TwoDShape
{
public:
	Circle();
	Circle(int s);
	void displayCircle();
	~Circle();
};