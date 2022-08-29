/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:15:07 by smia              #+#    #+#             */
/*   Updated: 2022/08/25 10:50:36 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called"<< std::endl;
    this->type = "Animal";
}

Animal::Animal(std::string Type)
{
    this->type = Type;
    std::cout << "Animal constructor called"<< std::endl;
}

Animal::Animal(Animal& x)
{
    *this = x;
    std::cout << "Animal Copy constructor called"<< std::endl;
}

void Animal::operator=(Animal& x)
{
    this->type = x.type;
    std::cout << "Animal assignment operator called" << std::endl;
}

Animal::~Animal()
{

    std::cout << "Animal Destructor called"<< std::endl;
}

std::string Animal::getType(void) const
{
    std::cout << "Animal getter Type called"<< std::endl;
    return (this->type);
}

void Animal::setType(std::string newType)
{
    std::cout << "Animal setter Type called"<< std::endl;
    this->type = newType;
}

void Animal::makeSound(void) const
{
    std::cout << "Sound Animal " << std::endl;
}
