#pragma once
#include <iostream>
using namespace std;

class A
{
	char* firstName;

public:
	A();
	A(char* n);
	void setA(char* n);
	char* getA();
};