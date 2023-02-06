#pragma once
#include "Shape.h"

class TwoDShape : public Shape
{
public:
	TwoDShape();
	TwoDShape(int s);
	void display2D();
	~TwoDShape();
};