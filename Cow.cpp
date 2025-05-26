#include <iostream>
#include "Cow.h"

using namespace std;

Cow::Cow() 
{
    cout << "A cow was created." << endl;
}

void Cow::makeSound()
{
    cout << "Moo!" << endl;
}

Cow::~Cow()
{
    cout << "The cow was deleted." << endl;
}