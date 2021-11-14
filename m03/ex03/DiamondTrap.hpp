/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:38:49 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/13 21:33:08 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"

class DiamondTrap :  public FragTrap, public ScavTrap
{   
    private:
        std::string Name;
    public:
        DiamondTrap();
        DiamondTrap(std::string Name);
        ~DiamondTrap();
        DiamondTrap(const DiamondTrap &f);
        void operator=(const DiamondTrap &f);
        void whoAmI();
        void attack(std::string const &target);
};




#endif