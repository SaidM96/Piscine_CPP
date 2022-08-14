/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:05:21 by smia              #+#    #+#             */
/*   Updated: 2022/08/12 23:49:04 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called"<< std::endl;
    this->pv = 10;
    this->energie = 10;
    this->damage = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std:: endl;
}

ClapTrap::ClapTrap(std::string Name)
{
    std::cout << "constructor called"<< std::endl;
    this->Name = Name;
    this->pv = 10;
    this->energie = 10;
    this->damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap& c)
{
    std::cout << "Copy constructor called"<< std::endl;
    *this = c;
}

void ClapTrap::operator=(const ClapTrap& c)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->Name = c.Name;
    this->pv = c.pv;
    this->energie = c.energie;
    this->damage = c.damage;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->pv > 0 && this->energie > 0)
    {
        std::cout << "ClapTrap " << this->Name << " attacks " << target << " , causing " << this->damage << " points of damage!" << std:: endl;
        this->energie--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (pv > 0)
    {
        std::cout << "ClapTrap " << this->Name << " take " << amount  << " points of damage!" << std:: endl;
        this->pv -= amount;
        if (this->pv <= 0)
        {
            this->pv = 0;
            std::cout << "ClapTrap " << this->Name  " died!" << std:: endl;
        }
}
   

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->pv > 0 && this->energie > 0)
    {
        std::cout << "ClapTrap " << this->Name << " repairs itself " << amount  << " points back!" << std:: endl;
        this->energie--;
        this->pv += amount;
    }
}



