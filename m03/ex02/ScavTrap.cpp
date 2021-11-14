/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   scavtrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 20:00:50 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/11 22:16:40 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	Hitpoints = 100;
	Energy_points = 50;
	Attack_damage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &f)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
    *this = f;
}

void ScavTrap::operator=(const ScavTrap &f)
{
    std::cout << "ScavTrap assignment operateur called" << std::endl;
    Name = f.Name;
    Hitpoints = f.Hitpoints;
    Energy_points = f.Energy_points;
    Attack_damage = f.Attack_damage;
}

void ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << Name <<  " attack " << target << ", causing "  << Attack_damage << " points of damage!\n";
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << Name <<  " have enterred in Gate keeper mode\n";
}
