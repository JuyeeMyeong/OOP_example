#include <iostream>
#include "Dog.h"

using namespace std;

Dog::Dog() 
{
    cout << "개가 생성되었습니다." << endl;
}

void Dog::makeSound()
{
    cout << "멍멍!" << endl;
}

Dog::~Dog()
{
    cout << "개가 소멸되었습니다." << endl;
}