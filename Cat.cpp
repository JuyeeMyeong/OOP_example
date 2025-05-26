#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() 
{
    cout << "고양이가 생성되었습니다." << endl;
}

void Cat::makeSound()
{
    cout << "야옹!" << endl;
}

Cat::~Cat()
{
    cout << "고양이가 소멸되었습니다." << endl;
}