#include "Bs.h"

Bs::Bs()
{

}

Bs::Bs(char* n, int i) :Student(n, i)
{

}

void Bs::displayBs()
{
	displayStudent();
	cout << "Student Type : Bachelors" << endl;
}