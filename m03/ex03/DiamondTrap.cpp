/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:49:51 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/14 21:04:19 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->Name = name;
    ClapTrap::Name = name + "_clap_name";
	this->Hitpoints = 100;
	this->Energy_points = 100;
	this->Attack_damage = 30;
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &f)
{
    std::cout << "DiamondTrap copy constructor called" << std::endl;
    *this = f;
}

void DiamondTrap::operator=(const DiamondTrap &f)
{
    std::cout << "DiamondTrap assignment operateur called" << std::endl;
    this->Name = f.Name;
    this->Hitpoints = f.Hitpoints;
    this->Energy_points = f.Energy_points;
    this->Attack_damage = f.Attack_damage;
}

void DiamondTrap::attack(std::string const &target)
{
    ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
    std::cout << "Diamond name: " << this->Name << " ClapTrap name: " << ClapTrap::Name << std::endl;
}
