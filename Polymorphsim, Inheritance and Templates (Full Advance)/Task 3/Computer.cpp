#include "Computer.h"

Computer::Computer()
{

}

void Computer::display()
{
	cout << "Monitor : \n";
	m.displayMonitor();
	cout << "\nCPU : \n";
	c.displayCpu();
	cout << "\nKeyboard : \n";
	k.displayKeyboard();
}

Computer::~Computer()
{

}