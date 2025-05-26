#include <iostream>
#include "Animal.h"

using namespace std;
Animal::Animal()
{
    cout << "동물이 생성되었습니다. " << endl;
}

void Animal::makeSound()
{
    cout << "동물은 어떻게 울까요?" << endl;
}

Animal::~Animal()
{
    cout << "동물이 사라졌습니다." << endl;
}