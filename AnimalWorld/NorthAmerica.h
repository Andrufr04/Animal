#pragma once
#include "Continent.h"

class NorthAmerica : public Continent
{
public:
    unique_ptr<Herbivore> CreateHerbivore();
    unique_ptr<Carnivore> CreateCarnivore();
};
