#include <iostream>
using namespace std;

class Player
{
protected:
	char* name;
	int matches;

public:
	Player();
	Player(char* n, int m);
	~Player();
	void displayP();
};