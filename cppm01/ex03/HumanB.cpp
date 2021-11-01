/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/30 17:46:57 by fbouibao          #+#    #+#             */
/*   Updated: 2021/10/31 13:00:06 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
    this->name = name;
}

HumanB::~HumanB()
{
}

void HumanB::attack(void)
{
    std::cout << this->name << " " << "attacks with his " << _wp->getType() << std::endl; 
}

Weapon *HumanB::getWeapon(void)
{
    return (this->_wp);
}

void HumanB::setWeapon(Weapon &w)
{
    this->_wp = &w;
}