/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 18:03:23 by fbouibao          #+#    #+#             */
/*   Updated: 2021/10/28 11:55:36 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce(void)
{
    std::cout << "<" << this->_name << ">" << " BraiiiiiiinnnzzzZ...\n";
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
}

Zombie::~Zombie()
{
    std::cout << this->_name << " died" << std::endl;
}

Zombie::Zombie(void)
{
    
}

void    setName(std::string name)
{
    this._name = name;
}