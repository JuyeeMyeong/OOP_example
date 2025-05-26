#include <iostream>
#include "Cow.h"

using namespace std;

Cow::Cow() 
{
    cout << "소가 생성되었습니다." << endl;
}

void Cow::makeSound()
{
    cout << "음메!" << endl;
}

Cow::~Cow()
{
    cout << "소가 소멸되었습니다." << endl;
}