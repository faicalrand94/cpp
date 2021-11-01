/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:17:24 by fbouibao          #+#    #+#             */
/*   Updated: 2021/10/28 13:03:57 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR;
    std::string &stringREF = s;

    stringPTR = &s;

    std::cout << "String ADDRESS => " << &s << "\n";
    
    std::cout << "StringPTR ADDRESS => " << stringPTR << "\n";
    
    std::cout << "StringREF ADDRESS => " << &stringREF << "\n";
    return (0);
}