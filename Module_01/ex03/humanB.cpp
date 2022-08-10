/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   humanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 03:41:33 by smia              #+#    #+#             */
/*   Updated: 2022/08/03 03:53:23 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : wpB(NULL)
{
    this->name = name;
}

void HumanB::attack()
{
	std::cout << this->name << " attackes with their " << wpB->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &Weapon)
{
	this->wpB = &Weapon;
}

HumanB::~HumanB()
{
}