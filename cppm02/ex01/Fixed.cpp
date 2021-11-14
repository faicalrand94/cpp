/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:10:58 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/08 18:36:17 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called\n";
    this->fixed_point = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called\n";
    *this = f;
}

void Fixed::operator=(const Fixed &f)
{
    std::cout << "Assignation operator called\n";
    this->fixed_point = f.fixed_point;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called\n";
    return (this->fixed_point);
}

Fixed::Fixed(const int nb)
{
    std::cout << "Int constructor called\n";
    this->fixed_point = roundf(nb * (1 << this->fractional_bits));
}

Fixed::Fixed(const float nb)
{
    std::cout << "Float constructor called\n";
    this->fixed_point = roundf(nb * (float)(1 << this->fractional_bits));
}

float Fixed::toFloat( void ) const
{
    return this->fixed_point / (float)(1 << this->fractional_bits);
}

int Fixed::toInt( void ) const
{
    return this->fixed_point / (1 << this->fractional_bits);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}