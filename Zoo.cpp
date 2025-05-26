#include <iostream>
#include "Zoo.h"

using namespace std;

void Zoo::addAnimal(Animal* animal)
{
    if (CountAnimals >= 10)
    {
        cout << "동물원이 꽉 찼습니다!" << endl;
    }

    animals[CountAnimals++] = animal;
}

void Zoo::performActions()
{
    for (int i = 0; i < CountAnimals; i++)
    {
        animals[i]->makeSound();
    }
}

Zoo::~Zoo()
{
    cout << "Zoo가 소멸되었습니다." << endl;
}