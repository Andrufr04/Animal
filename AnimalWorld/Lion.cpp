#include "Lion.h"

#include <iostream>
using namespace std;

Lion::Lion(int power) : Carnivore(power)
{}

void Lion::Eat(Herbivore* herbivore)
{
    if (power > herbivore->GetWeight())
    {
        power += 10;
        cout << "Lion eats the herbivore" << endl;
    }
    else
    {
        power -= 10;
        cout << "The lion is not strong enough" << endl;
    }
}