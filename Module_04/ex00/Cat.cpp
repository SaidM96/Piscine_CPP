/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:55:57 by smia              #+#    #+#             */
/*   Updated: 2022/08/16 03:10:21 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat& c)
{
    *this = c;
    std::cout << "Cat Copy constructor called"<< std::endl;
}

void Cat::operator=(Cat& c)
{
    this->type = c.type;
    std::cout << "Cat assignment operator called" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called"<< std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Miaw Miaw" << std::endl;
}
