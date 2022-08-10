/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:32:25 by smia              #+#    #+#             */
/*   Updated: 2022/08/10 14:13:26 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    this->value = 0;
}

Fixed::Fixed(const Fixed &f)
{
    *this = f;
}


void Fixed::operator=(const Fixed &f)
{
    this->value =  f.getRawBits();
}

int Fixed::getRawBits(void) const
{
    return (this->value);
}

void Fixed::setRawBits(int const raw)
{
    this->value = raw;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const int val)
{
    this->value = val << this->bits;
}

Fixed::Fixed(const float val)
{
    this->value = (int)roundf(val * (1 << this->bits));
}

int Fixed::toInt(void) const
{
    return (int)(this->value >> this->bits);
}

float Fixed::toFloat(void) const
{
    return (float)((float)this->value / (1 << this->bits));
}

std::ostream &operator<<(std::ostream &out, const Fixed &f)
{
    out << f.toFloat();
    return (out);
}

 // comparison operators:
bool Fixed::operator>(const Fixed &f)
{
    return (this->value > f.value);
}

bool Fixed::operator<(const Fixed &f)
{
    return (this->value < f.value);
}

bool Fixed::operator>=(const Fixed &f)
{
    return (this->value >= f.value);
}

bool Fixed::operator<=(const Fixed &f)
{
    return (this->value <= f.value);
}

bool Fixed::operator==(const Fixed &f)
{
    return (this->value == f.value);
}

bool Fixed::operator!=(const Fixed &f)
{
    return (this->value != f.value);
}
//  arithmetic operators :

float Fixed::operator+(const Fixed &f)
{
    return (this->toFloat() + f.toFloat());
}

float Fixed::operator-(const Fixed &f)
{
    return (this->toFloat() - f.toFloat());
}

float Fixed::operator*(const Fixed &f)
{
    return (this->toFloat() * f.toFloat());
}

float Fixed::operator/(const Fixed &f)
{
    return (this->toFloat() / f.toFloat());
}
// 4 increment/decrement 

Fixed   Fixed::operator++(void)
{
    this->value++;
    return (*this);
}

Fixed   Fixed::operator--(void)
{
    this->value--;
    return (*this);
}

Fixed   Fixed::operator++(int)
{
    Fixed tmp;
    tmp.value = this->value;
    this->value++;
    return (tmp);
}

Fixed   Fixed::operator--(int)
{
    Fixed tmp;
    tmp.value = this->value;
    this->value--;
    return (tmp);
}
// min max

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() <= b.getRawBits())
        return (a);
    return (b);
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if (a.getRawBits() <= b.getRawBits())
        return (b);
    return (a);
}

Fixed & Fixed::max(Fixed &a, Fixed &b)
{
    if (a.getRawBits() <= b.getRawBits())
        return (b);
    return (a);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if (a.getRawBits() <= b.getRawBits())
        return (a);
    return (b);
}