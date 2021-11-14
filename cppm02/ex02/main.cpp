/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 20:33:35 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/08 17:56:16 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) 
{
       Fixed a;
       Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
       std::cout << a << std::endl;
       std::cout << ++a << std::endl;
       std::cout << a << std::endl;
       std::cout << a++ << std::endl;
       std::cout << a << std::endl;
       std::cout << b << std::endl;
       std::cout << Fixed::min( a, b ) << std::endl;
       std::cout << Fixed::max( a, b ) << std::endl;
       return 0;
}