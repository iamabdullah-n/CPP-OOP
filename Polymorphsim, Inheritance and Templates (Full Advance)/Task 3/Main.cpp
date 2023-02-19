#include "Computer.h"

int main()
{
	Computer com;

	com.m.setMonitor("Dell", 1080, 6500);
	com.c.setCpu("Intel", 1195000, 89000);
	com.k.setKeyboard("Logitech", 105, 11000);

	com.display();

	return 0;
}