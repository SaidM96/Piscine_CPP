/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:55:57 by smia              #+#    #+#             */
/*   Updated: 2022/08/18 02:31:52 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
    br = new Brain;
    if (br == NULL)
	{
		std::cout << "allocation failed " << std::endl;
		exit (EXIT_FAILURE);
	}
    type = "Cat";
    br->setIdea("miaw");
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &cp)
{
    this->br = new Brain;
    if (br == NULL)
	{
		std::cout << "allocation failed " << std::endl;
		exit (EXIT_FAILURE);
	}
    *br = *(cp.br);
    this->type = cp.type;
    std::cout << "Cat Copy constructor called"<< std::endl;
}

void Cat::operator=(Cat const &cp)
{
    *br = *(cp.br);
    this->type = cp.type;
    std::cout << "Cat assignment operator called" << std::endl;
}

Cat::~Cat()
{
    delete br;
    std::cout << "Cat Destructor called"<< std::endl;
}

void Cat::makeSound(void) const
{
    std::cout << "Miaw Miaw" << std::endl;
}
