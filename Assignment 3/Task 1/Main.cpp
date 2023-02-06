#include "Batsman.h"

int main()
{
	int matches_score[10] = { 110, 91, 45, 150, 87, 74, 101, 131, 92, 100 };
	char name[] = "Babar Azam";

	Batsman B(name, 10, 1000, matches_score);

	B.calculateAvg();
	B.displayP();
	B.display();

	return 0;
}