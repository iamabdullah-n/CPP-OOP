#pragma once
#include "TwoDShape.h"

class Square : public TwoDShape
{
public:
	Square();
	Square(int);
	void displaySq();
	~Square();
};