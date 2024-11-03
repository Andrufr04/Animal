#include "Herbivore.h"
#include <iostream>

using namespace std;

Herbivore::Herbivore(double w, bool l)
{
	weight = w;
	life = l;
}

double Herbivore::GetWeight()
{
	return weight;
}

bool Herbivore::Life()
{
	return life;
}
