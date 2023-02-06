#include "Player.h"

Player::Player()
{
	name = nullptr;
	matches = 0;
}

Player::Player(char* n, int m)
{
	int len = 0;

	for (len = 0; n[len] != '\0'; len++);

	name = new char[len + 1];

	for (int i = 0; i < len; i++)
		name[i] = n[i];
	name[len] = '\0';

	matches = m;
}

void Player::displayP()
{
	cout << "Player Name : " << name << endl;
	cout << "Matches Played : " << matches << endl;
}

Player::~Player()
{
	delete[] name;
	name = nullptr;
}