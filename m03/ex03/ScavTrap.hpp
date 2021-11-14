/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:11:01 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/14 19:34:55 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{        
    public:
        ScavTrap();
        ScavTrap(std::string Name);
        ~ScavTrap();
        ScavTrap(const ScavTrap &f);
        void operator=(const ScavTrap &f);
        void attack(std::string const &target);
        void guardGate();
};




#endif