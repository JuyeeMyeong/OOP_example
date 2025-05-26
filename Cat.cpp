#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() 
{
    cout << "A cat was created" << endl;
}

void Cat::makeSound()
{
    cout << "Meow" << endl;
}

Cat::~Cat()
{
    cout << "The cat was deleted" << endl;
}