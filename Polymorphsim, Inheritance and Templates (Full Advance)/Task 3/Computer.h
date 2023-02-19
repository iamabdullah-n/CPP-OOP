#pragma once
#include "Monitor.h"
#include "Cpu.h"
#include "Keyboard.h"

class Computer
{
public:
	Monitor m;
	Cpu c;
	Keyboard k;

	Computer();
	void display();
	~Computer();
};

