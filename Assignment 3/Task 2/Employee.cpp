#include "Employee.h"

Employee::Employee()
{

}

Employee::Employee(char* n, int i) : Community(n, i)
{

}

void Employee::displayEmployee()
{
	displayCommunity();
	cout << "Type : Employee" << endl;
}