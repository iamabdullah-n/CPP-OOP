#include "Player.h"

class Bowler : public Player
{
	int wickets;

public:
	Bowler();
	Bowler(char* n, int m, int w);
	~Bowler();
	void display();
};