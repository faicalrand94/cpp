/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:33:35 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/11 22:13:27 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

int main( void ) 
{
    ScavTrap a;
    ScavTrap b( a );
    ScavTrap d("killer");
    ScavTrap c;
    c = b;
    a.attack("hhhh");
    b.takeDamage(6);
    c.beRepaired(8);
    d.guardGate();
    return 0;
}