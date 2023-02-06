#pragma once
#include "Shape.h"

class ThreeDShape : public Shape
{
public:
	ThreeDShape();
	ThreeDShape(int s);
	void display3D();
	~ThreeDShape();
};