/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 16:35:42 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/17 04:38:22 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat Default constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::~WrongCat()
{
    std::cout << "destructor called" << "\n";
}

WrongCat::WrongCat(const WrongCat &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

void WrongCat::operator=(const WrongCat &f)
{
    std::cout << "assignment operateur called" << std::endl;
    this->type = f.type;
}

void WrongCat::makeSound() const
{
    std::cout << "MIAW" << "\n";
}