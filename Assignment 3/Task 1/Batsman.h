#include "Bowler.h"

class Batsman : public Player
{
	int total_score;
	int* match_score;
	double average;

public:
	Batsman();
	Batsman(char* n, int m, int t, int* m1);
	~Batsman();
	void calculateAvg();
	void display();
};