#include <iostream>
#include "Dog.h"

using namespace std;

Dog::Dog() 
{
    cout << "A dog was created." << endl;
}

void Dog::makeSound()
{
    cout << "Bow wow!" << endl;
}

Dog::~Dog()
{
    cout << "The dog was deleted." << endl;
}