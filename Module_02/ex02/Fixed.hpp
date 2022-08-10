/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:26:34 by smia              #+#    #+#             */
/*   Updated: 2022/08/10 14:41:25 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        Fixed(void);
        Fixed(const Fixed &f);
        void operator=(const Fixed &f);
        int getRawBits(void) const;
        void setRawBits( int const raw );
        ~Fixed();
        //
        Fixed(const int val);
        Fixed(const float val);
        int toInt(void) const;
        float toFloat(void) const;
        //
        bool operator>(const Fixed &f);
        bool operator<(const Fixed &f);
        bool operator>=(const Fixed &f);
        bool operator<=(const Fixed &f);
        bool operator==(const Fixed &f);
        bool operator!=(const Fixed &f);
        //
        float operator+(const Fixed &f);
        float operator-(const Fixed &f);
        float operator*(const Fixed &f);
        float operator/(const Fixed &f);
        //
        Fixed  operator++(void);
        Fixed  operator--(void);
        Fixed  operator--(int);
        Fixed  operator++(int);

        //
        static const Fixed& max(const Fixed &a, const Fixed &b);
		static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& min(Fixed &a, Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
    private:
        int value;
        static const int bits = 8;
};

std::ostream &operator<<(std::ostream &out, const Fixed &f);
// 

#endif  