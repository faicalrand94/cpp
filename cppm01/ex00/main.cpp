/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:59:34 by fbouibao          #+#    #+#             */
/*   Updated: 2021/10/28 11:05:16 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
    Zombie z("hello");
   Zombie *zzz = newZombie("saad");
    z.announce();
    zzz->announce();
    delete zzz;
    randomChump("null37");
    return (0);
}