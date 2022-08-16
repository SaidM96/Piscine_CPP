/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:31:15 by smia              #+#    #+#             */
/*   Updated: 2022/08/16 03:13:30 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog& c)
{
    *this = c;
    std::cout << "Dog Copy constructor called"<< std::endl;
}

void Dog::operator=(Dog& c)
{
    this->type = c.type;
    std::cout << "Dog assignment operator called" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called"<< std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "hawhawhawhaw " << std::endl;
}

