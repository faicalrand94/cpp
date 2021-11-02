/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 16:48:57 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/02 17:28:07 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int get_expression(std::string s)
{
    std::string cmd[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i;

    i = -1;

    while (++i < 4)
    {
        while (cmd[i] == s)
        {
            return (i);
            break ;
        }
    }
    return (-1);
}


int main(int ac, char *av[])
{
    Karen k;
    int i;

    if (ac != 2)
    {
        std::cout << "Error: an argument" << "\n";
        return (1);
    }
    i = get_expression(av[1]);
    switch (i)
    {
        case 0:
            std::cout << "[ DEBUG ]" << "\n";
            k.complain("DEBUG");
        case 1:
            std::cout << "[ INFO ]" << "\n";
            k.complain("INFO");         
        case 2:
            std::cout << "[ WARNING ]" << "\n";
            k.complain("WARNING");         
        case 3:
            std::cout << "[ ERROR ]" << "\n";
            k.complain("ERROR");         
            break ; 
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << "\n";
            break;
    }
    return (0);
}