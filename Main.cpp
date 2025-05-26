#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// -------------------- Animal 클래스 (추상 클래스) --------------------
class Animal {
public:
    virtual void makeSound() = 0;
    virtual ~Animal() {
        cout << "Animal deleted." << endl;
    }
};

// -------------------- Dog 클래스 --------------------
class Dog : public Animal {
public:
    Dog() { cout << "A dog was created." << endl; }
    void makeSound() override { cout << "Bow wow!" << endl; }
    ~Dog() { cout << "The dog was deleted." << endl; }
};

// -------------------- Cat 클래스 --------------------
class Cat : public Animal {
public:
    Cat() { cout << "A cat was created." << endl; }
    void makeSound() override { cout << "Meow!" << endl; }
    ~Cat() { cout << "The cat was deleted." << endl; }
};

// -------------------- Cow 클래스 --------------------
class Cow : public Animal {
public:
    Cow() { cout << "A cow was created." << endl; }
    void makeSound() override { cout << "Moo!" << endl; }
    ~Cow() { cout << "The cow was deleted." << endl; }
};

// -------------------- Zoo 클래스 --------------------
class Zoo {
private:
    Animal* animals[10];
    int animalCount;

public:
    Zoo() : animalCount(0) {}

    void addAnimal(Animal* animal) {
        if (animalCount >= 10) {
            cout << "The zoo is full!" << endl;
            return;
        }
        animals[animalCount++] = animal;
    }

    void performActions() {
        for (int i = 0; i < animalCount; ++i) {
            animals[i]->makeSound();
        }
    }

    ~Zoo() {
        for (int i = 0; i < animalCount; ++i) {
            delete animals[i];
        }
        cout << "Zoo was deleted." << endl;
    }
};

// -------------------- 랜덤 동물 생성 함수 --------------------
Animal* createRandomAnimal() {
    int random = rand() % 3;
    switch (random) {
    case 0: return new Dog();
    case 1: return new Cat();
    case 2:
    default: return new Cow();
    }
}

// -------------------- main 함수 --------------------
int main() {
    srand(static_cast<unsigned int>(time(0)));

    cout << "Welcome to the Zoo!" << endl;

    Zoo zoo;
    for (int i = 0; i < 8; ++i) {
        cout << "Creating animal #" << i + 1 << endl;
        Animal* animal = createRandomAnimal();
        zoo.addAnimal(animal);
    }

    cout << "\nAll animals will now make their sound!" << endl;
    zoo.performActions();

    return 0;
}
