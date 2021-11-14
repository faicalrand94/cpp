/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:11:01 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/08 17:45:05 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int     fixed_point;
        static const int fractional_bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &f);
        Fixed(const int fixed_point);
        Fixed(const float fixed_point);
        void operator=(const Fixed &f);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        bool operator> (const Fixed& fxd);
        bool operator< (const Fixed& fxd);
        bool operator>= (const Fixed& fxd);
        bool operator<= (const Fixed& fxd);
        bool operator== (const Fixed& fxd);
        bool operator!= (const Fixed& fxd);
        Fixed operator+ (const Fixed& fxd);
        Fixed operator- (const Fixed& fxd);
        Fixed operator* (const Fixed& fxd);
        Fixed operator/ (const Fixed& fxd);
        Fixed operator++ (int);
        Fixed operator++ ();
        Fixed operator-- (int);
        Fixed operator-- ();
        static const Fixed& min(const Fixed& a, const Fixed& b);
        static const Fixed& max(const Fixed& a, const Fixed& b);
        
};
std::ostream& operator<<(std::ostream& os, const Fixed& obj);


#endif