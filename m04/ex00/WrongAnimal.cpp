/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:22:39 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/16 17:49:24 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type)
{
    std::cout << "constructor called" << std::endl;
    this->type = type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "destructor called" << "\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

void WrongAnimal::operator=(const WrongAnimal &f)
{
    std::cout << "assignment operateur called" << std::endl;
    this->type = f.type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal" << "\n";
}