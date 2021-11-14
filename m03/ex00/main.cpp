/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:33:35 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/11 21:10:49 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

int main( void ) 
{
    ClapTrap a;
    ClapTrap b( a );
    ClapTrap d("killer");
    ClapTrap c;
    c = b;
    a.attack("hhhh");
    b.takeDamage(6);
    c.beRepaired(8);
    return 0;
}