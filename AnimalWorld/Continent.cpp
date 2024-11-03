#include "Continent.h"

void Continent::AddHerbivore(unique_ptr<Herbivore> herbivore)
{
    herbivores.push_back(move(herbivore));
}

void Continent::AddCarnivore(unique_ptr<Carnivore> carnivore)
{
    carnivores.push_back(move(carnivore));
}

const vector<unique_ptr<Herbivore>>& Continent::GetHerbivores()
{
    return herbivores;
}

const vector<unique_ptr<Carnivore>>& Continent::GetCarnivores()
{
    return carnivores;
}