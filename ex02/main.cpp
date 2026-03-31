#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal u; // ❌ this should NOT compile (keep it commented)

    Animal* a = new Dog();
    Animal* b = new Cat();

    a->makeSound();
    b->makeSound();

    delete a;
    delete b;

    return 0;
}