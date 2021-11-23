/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 23:48:03 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/19 02:27:35 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    int i;

    std::cout << "Brain Default constructor called" << std::endl;
    i = -1;
    while (++i < 100)
    {
        this->ideas[i] = "hhhhhhhh";
    }
}

Brain::~Brain()
{
    std::cout << "destructor called" << "\n";
}

Brain::Brain(const Brain &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

void Brain::operator=(const Brain &f)
{
    int i;
    
    std::cout << "assignment operateur called" << std::endl;
    i = -1;
    while (++i < 100)
    {
        this->ideas[i] = f.ideas[i];
    }
}

std::string Brain::getTypeID( int index ) const
{
    return this->ideas[index];

}

void Brain::setType(std::string type, int i)
{
    this->ideas[i] = type;
}