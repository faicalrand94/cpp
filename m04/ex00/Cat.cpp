/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:28:28 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/17 01:28:24 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat Default constructor called" << std::endl;
    type = "Cat";
}

Cat::~Cat()
{
    std::cout << "destructor called" << "\n";
}

Cat::Cat(const Cat &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

void Cat::operator=(const Cat &f)
{
    std::cout << "assignment operateur called" << std::endl;
    this->type = f.type;
}

void Cat::makeSound() const
{
    std::cout << "MIAW" << "\n";
}