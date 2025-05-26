#include <cstdlib> // rand()
#include <ctime>
#include <iostream>

#include "Zoo.h"
#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "Cow.h"

using namespace std;

// 랜덤 동물을 생성하는 함수
// - 0, 1, 2 중 하나의 난수를 생성하여 각각 Dog, Cat, Cow 객체 중 하나를 동적으로 생성합니다.
// - 생성된 객체는 Animal 타입의 포인터로 반환됩니다.
// - 입력 매개변수: 없음
// - 반환값: Animal* (생성된 동물 객체의 포인터)
Animal* createRandomAnimal()
{
    int random = rand() % 3;
    cout << random << endl;
    switch (random)
    {
    case 0:
        return new Dog();
    case 1:
        return new Cat();
    case 2:
    default:
        return new Cow();
    }
}

int main()
{
    cout << "Welcome to the Zoo!" << endl;
    Zoo zoo; // 동물원 생성성
    
    // 동물원에 동물 8마리를 랜덤으로 추가
    for (int i = 0; i < 8; i++)
    {
        cout << "Animal's being created." << endl;
        Animal* animal = createRandomAnimal(); // 동물을 랜덤하게 생성
        zoo.addAnimal(animal); // 동물을 동물원에 넣음
    }

    zoo.performActions();

/*
    Dog* puppy = new Dog();
    puppy->makeSound();
    Cat* kitten = new Cat();
    kitten->makeSound();
    Cow* moo = new Cow();
    moo->makeSound();
*/

    return 0;
}