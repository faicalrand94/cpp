/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:05:01 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/12 18:13:10 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	Hitpoints = 100;
	Energy_points = 100;
	Attack_damage = 30;
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &f)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
    *this = f;
}

void FragTrap::operator=(const FragTrap &f)
{
    std::cout << "FragTrap assignment operateur called" << std::endl;
    Name = f.Name;
    Hitpoints = f.Hitpoints;
    Energy_points = f.Energy_points;
    Attack_damage = f.Attack_damage;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "high Fives Guys" << "\n";
}
