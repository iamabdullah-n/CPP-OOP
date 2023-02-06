#pragma once
#include <iostream>
using namespace std;

class Shape
{
	int sides;

public:
	Shape();
	Shape(int s);
	void displayShape();
	~Shape();
};