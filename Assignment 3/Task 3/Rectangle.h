#pragma once
#include "TwoDShape.h"
class Rectangle : public TwoDShape
{
public:
	Rectangle();
	Rectangle(int s);
	void displayRectangle();
	~Rectangle();
};