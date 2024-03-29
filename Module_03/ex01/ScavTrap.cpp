/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:18:57 by smia              #+#    #+#             */
/*   Updated: 2022/08/14 22:01:03 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"


ScavTrap::ScavTrap() : ClapTrap(100,50,20)
{
    std::cout << "ScavTrap defualt constructor called"<< std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap Destructor called" << std:: endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(10,50,20)
{
    this->Name = name;
    std::cout << "ScavTrap constructor called"<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap& c)
{
    std::cout <<  "Copy constructor ScavTrap called"<< std::endl;
    *this = c;
}


void ScavTrap::operator=(ScavTrap& c)
{
    std::cout << "Copy assignment ScavTrap operator called" << std::endl;
    this->Name = c.Name;
    this->pv = c.pv;
    this->energie = c.energie;
    this->damage = c.damage;
}

void ScavTrap::attack(std::string const &target)
{
    if (this->pv > 0 && this->energie > 0)
    {
        std::cout << "ScavTrap " << this->Name << " attacks " << target << " , causing " << this->damage << " points of damage!" << std:: endl;
        this->energie--;
    }
}

void ScavTrap::guardGate(void)
{
     std::cout << "ScavTrap " << this->Name << " is now in Gate keeper mode " << std:: endl;
}