/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:28:28 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/19 02:08:03 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
    std::cout << "Cat Default Constructor called" << std::endl;
    this->type = "Cat";
    this->brain = new Brain();
}

Cat::Cat(const Cat& obj)
{
    std::cout << "Cat copy Constructor called" << std::endl;
    this->brain = new Brain();
    *this = obj;
}

Cat::~Cat()
{
    std::cout << "Cat Default Destructor called" << std::endl;
    delete this->brain;
}

void Cat::operator=(const Cat& obj)
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

void Cat::makeSound(void) const
{
    std::cout << "meow meaw" << std::endl;
}

Brain*   Cat::getBrain() const
{
    return (brain);
}