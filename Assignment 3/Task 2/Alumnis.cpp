#include "Alumnis.h"

Alumnis::Alumnis()
{

}

Alumnis::Alumnis(char* n, int i) : Community(n, i)
{

}

void Alumnis::displayAlumni()
{
	displayCommunity();
	cout << "Type : Alumni" << endl;
}