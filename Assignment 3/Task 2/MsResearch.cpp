#include "MsResearch.h"

MsResearch::MsResearch()
{

}

MsResearch::MsResearch(char* n, int i) : Ms(n, i)
{

}

void MsResearch::displayMsResearch()
{
	displayMs();
	cout << "MS Type : MS by Research" << endl;
}