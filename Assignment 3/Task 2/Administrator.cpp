#include "Administrator.h"

Administrator::Administrator()
{

}

Administrator::Administrator(char* n, int i) : Faculty(n, i)
{

}

void Administrator::displayAdministrator()
{
	displayFaculty();
	cout << "Faculty Type : Administration" << endl;
}