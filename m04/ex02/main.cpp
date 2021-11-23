#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include "Brain.hpp"


int main()
{

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    i->makeSound();
    delete j;
    delete i;
}
