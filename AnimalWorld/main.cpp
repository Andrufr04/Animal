#include "Africa.h"
#include "NorthAmerica.h"
#include "AnimalWorld.h"
#include <iostream>
#include <memory>
using namespace std;

int main()
{
    int choice;
    bool running = true;

    while (running)
    {
        cout << "Select an option:\n";
        cout << "1. Discover Life in Africa\n";
        cout << "2. Discover Life in North America\n";
        cout << "0. Quit the Program\n";

        cout << "Please enter your selection: ";
        cin >> choice;

        system("cls");

        switch (choice)
        {
        case 1:
        {
            unique_ptr<Continent> africa = make_unique<Africa>();
            AnimalWorld animalWorld(move(africa));

            int herbivoresCount, carnivoresCount;
            cout << "How many herbivores would you like to observe? ";
            cin >> herbivoresCount;

            cout << "How many carnivores would you like to observe? ";
            cin >> carnivoresCount;

            animalWorld.MealsHerbivores(herbivoresCount);

            animalWorld.NutritionCarnivores(carnivoresCount);
            break;
        }
        case 2:
        {
            unique_ptr<Continent> northAmerica = make_unique<NorthAmerica>();
            AnimalWorld animalWorld(move(northAmerica));

            int herbivoresCount, carnivoresCount;
            cout << "How many herbivores would you like to observe? ";
            cin >> herbivoresCount;

            cout << "How many carnivores would you like to observe? ";
            cin >> carnivoresCount;

            animalWorld.MealsHerbivores(herbivoresCount);

            animalWorld.NutritionCarnivores(carnivoresCount);
            break;
        }
        case 0:
            running = false;
            cout << "Ending program.\n";
            break;

        default:
            cout << "Invalid selection! Please try again.\n";
            break;
        }

        system("pause");
        system("cls");
    }

    return 0;
}
