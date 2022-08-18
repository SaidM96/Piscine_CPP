/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:31:15 by smia              #+#    #+#             */
/*   Updated: 2022/08/18 00:30:34 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    br = new Brain;
    if (br == NULL)
	{
		std::cout << "allocation failed " << std::endl;
		exit (EXIT_FAILURE);
	}
    type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &cp)
{
    br = new Brain;
    if (br == NULL)
	{
		std::cout << "allocation failed " << std::endl;
		exit (EXIT_FAILURE);
	}
    *br = *cp.br;
    this->type = cp.type;
    std::cout << "Dog Copy constructor called"<< std::endl;
}

void Dog::operator=(Dog const &cp)
{
    *br = *cp.br;
    this->type = cp.type;
    std::cout << "Dog assignment operator called" << std::endl;
}

Dog::~Dog()
{
    delete br;
    std::cout << "Dog Destructor called"<< std::endl;
}

void Dog::makeSound(void) const
{
    std::cout << "hawhawhaw" << std::endl;
}
