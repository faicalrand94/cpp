/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:32:59 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/11 18:55:25 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : Name("Nothing"), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
    std::cout << "Claptrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), Hitpoints(10), Energy_points(10), Attack_damage(0)
{
    std::cout << "Claptrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "distructor called" << "\n";
}

ClapTrap::ClapTrap(const ClapTrap &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}

void ClapTrap::operator=(const ClapTrap& obj)
{
    this->Name = obj.Name;
    this->Hitpoints = obj.Hitpoints;
    this->Energy_points = obj.Energy_points;
    this->Attack_damage = obj.Attack_damage;
}

void ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << this->Name <<  " attack " << target << ", causing "  << this->Attack_damage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << this->Name << " take damage " << amount << std::endl;
}

void  ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << this->Name << " be repaired " <<  "+" << amount  << std::endl;
}

void ClapTrap::setName(std::string val)
{
    this->Name = val;
}
void ClapTrap::setHitpoints(int val)
{
    this->Hitpoints = val;
}
void ClapTrap::setEnergyPoint(int val)
{
    this->Energy_points = val;
}
void ClapTrap::setAttackDamage(int val)
{
    this->Attack_damage = val;
}
std::string ClapTrap::getName(void)
{
    return (this->Name);
}
int ClapTrap::getHitpoints(void)
{
    return (this->Hitpoints);
}
int ClapTrap::getEnergyPoint(void)
{
    return (this->Energy_points);
}
int ClapTrap::getAttackDamage(void)
{
    return (this->Attack_damage);
}
