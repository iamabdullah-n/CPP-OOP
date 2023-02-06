#include "Bowler.h"

Bowler::Bowler()
{
	wickets = 0;
}

Bowler::Bowler(char* n, int m, int w) : Player(n, m)
{
	wickets = w;
}

void Bowler::display()
{
	cout << "Wickets Taken : " << wickets << endl << endl;
}

Bowler::~Bowler()
{

}