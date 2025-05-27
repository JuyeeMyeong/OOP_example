#include <iostream>
#include "Animal.h"

using namespace std;

Animal::~Animal()
{
    cout << "The Animal's deleted" << endl;
}