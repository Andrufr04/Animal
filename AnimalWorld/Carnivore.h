#pragma once
#include "Herbivore.h"

class Carnivore
{
protected:
	double power;
public:
	Carnivore(double p);
	virtual void Eat(Herbivore* herbivore) = 0;
	double GetPower();
};

