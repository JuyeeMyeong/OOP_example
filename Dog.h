#pragma once
#include "Animal.h"

class Dog : public Animal {
public:
    Dog();
    void makeSound() override;
    ~Dog();
};