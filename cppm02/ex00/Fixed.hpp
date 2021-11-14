/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbouibao <fbouibao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 16:11:01 by fbouibao          #+#    #+#             */
/*   Updated: 2021/11/07 13:44:23 by fbouibao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>


class Fixed
{
    private:
        int     fixed_point;
        static const int fractional_bits = 8;
    public:
        Fixed();
        ~Fixed();
        Fixed(const Fixed &f);
        void operator=(const Fixed &f);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};




#endif