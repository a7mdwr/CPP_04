#include "Dog.hpp"
#include "Cat.hpp"
#include <iostream>

int main()
{
    std::cout << "===== DOG DEEP COPY TEST =====" << std::endl;

    Dog dog1;
    dog1.set_idea(0, "bone");

    Dog dog2(dog1);

    std::cout << "Before change:" << std::endl;
    std::cout << "dog1: " << dog1.get_idea(0) << std::endl;
    std::cout << "dog2: " << dog2.get_idea(0) << std::endl;

    dog1.set_idea(0, "meat");

    std::cout << "After change:" << std::endl;
    std::cout << "dog1: " << dog1.get_idea(0) << std::endl;
    std::cout << "dog2: " << dog2.get_idea(0) << std::endl;

    std::cout << "\n===== CAT ASSIGNMENT TEST =====" << std::endl;

    Cat cat1;
    cat1.set_idea(0, "sleep");

    Cat cat2;
    cat2 = cat1;

    std::cout << "Before change:" << std::endl;
    std::cout << "cat1: " << cat1.get_idea(0) << std::endl;
    std::cout << "cat2: " << cat2.get_idea(0) << std::endl;

    cat1.set_idea(0, "hunt");

    std::cout << "After change:" << std::endl;
    std::cout << "cat1: " << cat1.get_idea(0) << std::endl;
    std::cout << "cat2: " << cat2.get_idea(0) << std::endl;

    return 0;
}