/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:59:34 by fbouibao          #+#    #+#             */
/*   Updated: 2021/10/28 12:04:45 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

int main()
{
    int N = 3;
    Zombie *z01 = zombieHorde(N, "faical");
    for (int i = 0; i < N; i++)
    {
        z01[i].announce();
    }
    delete[] z01;
    return (0);
}