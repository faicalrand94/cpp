/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:02:29 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/14 19:34:47 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : virtual public ClapTrap
{        
    public:
        FragTrap();
        FragTrap(std::string Name);
        ~FragTrap();
        FragTrap(const FragTrap &f);
        void operator=(const FragTrap &f);
        void highFivesGuys(void);

};




#endif