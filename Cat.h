#pragma once
#include "Animal.h"

class Cat : public Animal {
public:
    Cat();
    void makeSound() override;
    ~Cat();
};