#include "Staff.h"

Staff::Staff()
{

}

Staff::Staff(char* n, int i) : Employee(n, i)
{

}

void Staff::displayStaff()
{
	displayEmployee();
	cout << "Employee Type : Staff Member" << endl;
}