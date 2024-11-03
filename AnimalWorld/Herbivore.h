#pragma once
class Herbivore
{
protected:
	double weight;
	bool life;
public:
	Herbivore(double w, bool l);
	virtual void EatGrass() = 0;
	double GetWeight();
	bool Life();
};

