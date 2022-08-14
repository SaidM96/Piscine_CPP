/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 22:50:34 by smia              #+#    #+#             */
/*   Updated: 2022/08/15 00:47:46 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    this->Name = "";
    ClapTrap::Name = this->Name + "_clap_name";
    this->pv = FragTrap::pv;
    this->energie = ScavTrap::energie;
    this->damage = FragTrap::damage;
    std::cout << "DiamondTrap constructor called"<< std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor called"<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
{
    this->Name = name;
    ClapTrap::Name = this->Name + "_clap_name";
    this->pv = FragTrap::pv;
    this->energie = ScavTrap::energie;
    this->damage = FragTrap::damage;
    std::cout << "DiamondTrap constructor called"<< std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& c)
{
    *this = c;
    std::cout << "DiamondTrap copy constructor called"<< std::endl;
}

void DiamondTrap::operator=(DiamondTrap& c)
{
    this->Name = c.Name;
    ClapTrap::Name = this->Name + "_clap_name";
    this->pv = c.pv;
    this->energie = c.energie;
    this->damage = c.damage;
}

void DiamondTrap::whoAmI(void)
{
    std::cout << "I am " << this->Name << " And my ClapTrap is " << ClapTrap::Name<< std::endl;
}
