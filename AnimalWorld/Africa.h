#pragma once
#include "Continent.h"

class Africa : public Continent
{
public:
    unique_ptr<Herbivore> CreateHerbivore();
    unique_ptr<Carnivore> CreateCarnivore();
};
