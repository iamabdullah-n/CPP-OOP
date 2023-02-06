#include "Faculty.h"

Faculty::Faculty()
{

}

Faculty::Faculty(char* n, int i) : Employee(n, i)
{

}

void Faculty::displayFaculty()
{
	displayEmployee();
	cout << "Employee Type : Faculty Member" << endl;
}