/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 12:32:25 by smia              #+#    #+#             */
/*   Updated: 2022/08/09 16:50:20 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
    std::cout << "Default constructor called" << std::endl;
    this->value = 0;
}

Fixed::Fixed(const Fixed &f)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = f;
}


void Fixed::operator=(const Fixed &f)
{
    std::cout << "Copy assignment operator called" << std::endl;
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
    std::cout << "Destructor called" << std:: endl;
}

Fixed::Fixed(const int val)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = val << this->bits;
}

Fixed::Fixed(const float val)
{
    std::cout << "Float constructor called" << std::endl;
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
