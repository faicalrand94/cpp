/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:10:58 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/08 18:33:05 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    this->fixed_point = 0;
}

Fixed::~Fixed()
{
//    std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &f)
{
    this->fixed_point = f.fixed_point;
}

void Fixed::operator=(const Fixed &f)
{
    this->fixed_point = f.fixed_point;
}

int Fixed::getRawBits( void ) const
{
    return (this->fixed_point);
}

Fixed::Fixed(const int nb)
{
    this->fixed_point = roundf(nb * (1 << this->fractional_bits));
}

Fixed::Fixed(const float nb)
{
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

bool Fixed::operator> (const Fixed& fxd)
{
    return (this->toFloat() > fxd.toFloat());
}

bool Fixed::operator< (const Fixed& fxd)
{
    return (this->toFloat() < fxd.toFloat());
}

bool Fixed::operator>= (const Fixed& fxd)
{
    return (this->toFloat() >= fxd.toFloat());
}

bool Fixed::operator<= (const Fixed& fxd)
{
    return (this->toFloat() <= fxd.toFloat());
}

bool Fixed::operator== (const Fixed& fxd)
{
    return (this->toFloat() == fxd.toFloat());
}

bool Fixed::operator!= (const Fixed& fxd)
{
    return (this->toFloat() != fxd.toFloat());
}

Fixed Fixed::operator+ (const Fixed& fxd)
{
    return (this->toFloat() + fxd.toFloat());
}

Fixed Fixed::operator- (const Fixed& fxd)
{
    return (this->toFloat() - fxd.toFloat());
}

Fixed Fixed::operator* (const Fixed& fxd)
{
    return (this->toFloat() * fxd.toFloat());
}

Fixed Fixed::operator/ (const Fixed& fxd)
{
    return (this->toFloat() / fxd.toFloat());
}

Fixed Fixed::operator++ (int)
{
    Fixed tmp;
    tmp.fixed_point = this->fixed_point++;
    return (tmp);
}

Fixed Fixed::operator++ ()
{
    Fixed tmp;
    tmp.fixed_point = ++this->fixed_point;
    return (tmp);
}


Fixed Fixed::operator-- (int)
{
    Fixed tmp;
    tmp.fixed_point = this->fixed_point--;
    return (tmp);
}

Fixed Fixed::operator-- ()
{
    Fixed tmp;
    tmp.fixed_point = --this->fixed_point;
    return (tmp);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a.fixed_point < b.fixed_point)
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a.fixed_point > b.fixed_point)
        return (a);
    return (b);
}