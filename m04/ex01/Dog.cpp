/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:28:28 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/19 02:15:48 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
    std::cout << "DOG Default Constructor called" << std::endl;
    this->type = "Dog";
    this->brain = new Brain();
}

Dog::Dog(const Dog& obj)
{
    std::cout << "DOG copy Constructor called" << std::endl;
    this->brain = new Brain();
    *this = obj;
}

Dog::~Dog()
{
    std::cout << "DOG Default Destructor called" << std::endl;
    delete this->brain;
}

void Dog::operator=(const Dog& obj)
{
    int i;

    std::cout << "assignment operateur called" << std::endl;
    this->type = obj.type;
    i = -1;
    while (++i < 100)
    {
        this->brain->setType(obj.brain->getTypeID(i), i);
    }
}

Brain*   Dog::getBrain() const
{
    return (brain);
}

void Dog::makeSound(void) const
{
    std::cout << "haw weew" << std::endl;
}