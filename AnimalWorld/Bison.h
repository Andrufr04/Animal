#pragma once

#include "Herbivore.h"

class Bison : public Herbivore
{
public:
    Bison(int w, bool l);
    void EatGrass() override;
};

