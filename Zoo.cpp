#include <iostream>
#include "Zoo.h"

using namespace std;

void Zoo::addAnimal(Animal* animal)
{
    if (CountAnimals >= 10) // 동물원에 동물들이 다 차있을 때때
    {
        cout << "The zoo's full!" << endl;
        return; // 그냥 return
    }

    animals[CountAnimals++] = animal; // 동물을 배열에 추가함함
}

void Zoo::performActions()
{
    for (int i = 0; i < CountAnimals; i++)
    {
        animals[i]->makeSound(); // 동물원에 있는 동물들의 makeSound() 함수 불러옴옴
    }
}

Zoo::~Zoo() // 동물 객체 메모리 해제
{
    for (int i = 0; i < CountAnimals; i++)
    {
        delete animals[i];
        animals[i] = nullptr;
    }

    cout << "Zoo was deleted" << endl;
    //cout << "Zoo가 소멸되었습니다." << endl;
}