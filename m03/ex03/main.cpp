/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:33:35 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/12 18:12:10 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

int main( void ) 
{
    FragTrap a;
    FragTrap b( a );
    FragTrap d("killer");
    FragTrap c;
    c = b;
    a.attack("hhhh");
    b.takeDamage(6);
    c.beRepaired(8);
    d.highFivesGuys();
    
    return 0;
}