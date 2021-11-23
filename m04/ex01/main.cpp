#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>
#include "Brain.hpp"


int main()
{
    //  Animal* j = new Dog();
    Cat* i = new Cat();
    std::cout << "@@@@@@@@@@ " << i->getBrain()->getTypeID(10) << std::endl;
    Cat* k = new Cat(*i);
    i->getBrain()->setType("hello", 10);
    std::cout << "@@@@@@@@@@ " << i->getBrain()->getTypeID(10) << std::endl;
    std::cout << "@@@@@@@@@@ " << k->getBrain()->getTypeID(10) << std::endl;
    // Cat b;
    // Cat A(b);
    // delete j;//should not create a leak
    std::cout << std::endl;
    delete i;
    delete k; 
}
