/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 03:27:07 by smia              #+#    #+#             */
/*   Updated: 2022/08/16 03:29:26 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called"<< std::endl;
    this->type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(std::string Type)
{
    this->type = Type;
    std::cout << "WrongAnimal constructor called"<< std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal& x)
{
    *this = x;
    std::cout << "WrongAnimal Copy constructor called"<< std::endl;
}

void WrongAnimal::operator=(WrongAnimal& x)
{
    this->type = x.type;
    std::cout << "WrongAnimal assignment operator called" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called"<< std::endl;
}

std::string WrongAnimal::getType(void) const
{
    std::cout << "WrongAnimal getter Type called"<< std::endl;
    return (this->type);
}

void WrongAnimal::setType(std::string newType)
{
    std::cout << "WrongAnimal setter Type called"<< std::endl;
    this->type = newType;
}

void WrongAnimal::makeSound(void) const
{
    std::cout << "Sound WrongAnimal " << std::endl;
}