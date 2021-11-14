/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:11:01 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/11 18:45:27 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string Name;
        int Hitpoints;
        int Energy_points;
        int Attack_damage;
        
    public:
        ClapTrap();
        ClapTrap(std::string Name);
        ~ClapTrap();
        ClapTrap(const ClapTrap &f);
        void operator=(const ClapTrap &f);
        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void setName(std::string val);
        void setHitpoints(int val);
        void setEnergyPoint(int val);
        void setAttackDamage(int val);
        std::string getName(void);
        int getHitpoints(void);
        int getEnergyPoint(void);
        int getAttackDamage(void);
};




#endif