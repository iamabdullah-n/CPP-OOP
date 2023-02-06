#include "Community.h"

Community::Community()
{
	name = nullptr;
	id = 0;
}

Community::Community(char* n, int i)
{
	int len = 0;
	
	for (len = 0; n[len] != '\0'; len++);
	name = new char[len + 1];
	for (int i = 0; i < len; i++)
	{
		name[i] = n[i];
	}
	name[len] = '\0';

	id = i;
}

void Community::displayCommunity()
{
	cout << "Name : " << name << endl;
	cout << "ID : " << id << endl;
}

Community::~Community()
{
	delete[] name;
	name = nullptr;
}