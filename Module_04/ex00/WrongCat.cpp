/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 03:30:32 by smia              #+#    #+#             */
/*   Updated: 2022/08/16 03:39:28 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat& c)
{
    *this = c;
    std::cout << "WrongCat Copy constructor called"<< std::endl;
}

void WrongCat::operator=(WrongCat& c)
{
    this->type = c.type;
    std::cout << "WrongCat assignment operator called" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called"<< std::endl;
}

void WrongCat::makeSound(void) const
{
    std::cout << "Miaw Miaw" << std::endl;
}
