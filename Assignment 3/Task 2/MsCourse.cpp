#include "MsCourse.h"

MsCourse::MsCourse()
{

}

MsCourse::MsCourse(char* n, int i) : Ms(n, i)
{

}

void MsCourse::displayMsCourse()
{
	displayMs();
	cout << "MS Type : MS by Course Work" << endl;
}