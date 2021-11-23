/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:28:28 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/16 17:49:24 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog Default constructor called" << std::endl;
    type = "Dog";
}

Dog::~Dog()
{
    std::cout << "destructor called" << "\n";
}

Dog::Dog(const Dog &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

void Dog::operator=(const Dog &f)
{
    std::cout << "assignment operateur called" << std::endl;
    this->type = f.type;
}

void Dog::makeSound() const
{
    std::cout << "HOH Woe" << "\n";
}