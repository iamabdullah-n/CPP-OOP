#pragma once
#include <iostream>
using namespace std;

class Community
{
	char* name;
	int id;

public:
	Community();
	Community(char* n, int i);
	void displayCommunity();
	~Community();
};