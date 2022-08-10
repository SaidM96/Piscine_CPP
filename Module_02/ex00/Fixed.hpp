/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:26:34 by smia              #+#    #+#             */
/*   Updated: 2022/08/10 21:36:44 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
    public:
        Fixed(void);
        Fixed(int value);
        Fixed(const Fixed &f);
        void operator=(const Fixed &f);
        int getRawBits(void) const;
        void setRawBits( int const raw );
        ~Fixed();
        
    private:
        int value;
        static const int bits = 8;
};

#endif