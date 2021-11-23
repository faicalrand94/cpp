/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 22:19:46 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/19 02:22:39 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string type)
{
    std::cout << "Animal constructor called" << std::endl;
    this->type = type;
}

Animal::~Animal()
{
    std::cout << "destructor called" << "\n";
}

Animal::Animal(const Animal &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

void Animal::operator=(const Animal &f)
{
    std::cout << "assignment operateur called" << std::endl;
    this->type = f.type;
}