#include "Paralellogram.h"

Paralellogram::Paralellogram()
{

}

Paralellogram::Paralellogram(int s) : TwoDShape(s)
{

}

void Paralellogram::displayParalellogram()
{
	display2D();
	cout << "This is a Paralellogram\n";
}

Paralellogram::~Paralellogram()
{

}