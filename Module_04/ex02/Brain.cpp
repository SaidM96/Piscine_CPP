/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 04:20:00 by smia              #+#    #+#             */
/*   Updated: 2022/08/17 01:52:29 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    for(int i = 0; i < 100 ; i++)
        ideas[i] = "";
    std::cout << "Brain default constructor called"<< std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called"<< std::endl;
}

Brain::Brain(Brain const &cp)
{
    for(int i = 0; i < 100 ; i++)
        ideas[i] = cp.ideas[i];
    std::cout << "brain Copy constructor called"<< std::endl;
}

void Brain::operator=(Brain const &cp)
{
    for(int i = 0; i < 100 ; i++)
        ideas[i] = cp.ideas[i];
    std::cout << "Brain assignment operator called" << std::endl;
}

void Brain::setIdea(std::string idea)
{
    for(int i = 0; i < 100 ; i++)
        ideas[i] = idea;
}

std::string* Brain::getIdea(void)
{
    return (this->ideas);
}
