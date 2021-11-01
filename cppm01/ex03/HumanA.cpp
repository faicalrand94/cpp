/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 14:33:34 by fbouibao          #+#    #+#             */
/*   Updated: 2021/10/30 20:18:59 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &wp) : _wp(wp)
{
    this->name = name;
    // this->_wp = wp;
}

HumanA::~HumanA()
{
}

void HumanA::attack(void)
{
    std::cout << this->name << " " << "attacks with his " << _wp.getType() << std::endl; 
}

Weapon HumanA::getWeapon(void)
{
    return (this->_wp);
}

void HumanA::setWeapon(Weapon w)
{
    this->_wp = w;
}
