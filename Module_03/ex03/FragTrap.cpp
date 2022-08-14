/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:23:31 by smia              #+#    #+#             */
/*   Updated: 2022/08/13 23:10:38 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(100, 100 ,30)
{
    std::cout << "FragTrap constructor called"<< std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor called"<< std::endl;
}

FragTrap::FragTrap(std::string name) :ClapTrap(100, 100 ,30)
{
    this->Name = name;
    std::cout << "FragTrap constructor called"<< std::endl;
}

FragTrap::FragTrap(FragTrap& c)
{
    *this = c;
    std::cout << "FragTrap copy constructor called"<< std::endl;
}

void FragTrap::operator=(FragTrap& c)
{
    this->Name = c.Name;
    this->pv = c.pv;
    this->energie = c.energie;
    this->damage = c.damage;   
}

void FragTrap::attack(std::string const &target)
{
    if (this->pv > 0 && this->energie > 0)
    {
        std::cout << "FragTrap " << this->Name << " attacks " << target << " , causing " << this->damage << " points of damage!" << std:: endl;
        this->energie--;
    }
    else
        std::cout << "FragTrap " << this->Name << " can't do anythings !" << std::endl;
}

 void FragTrap::highFivesGuys(void)
 {
    std::cout << "FragTrap give a high five" << std::endl;
 }