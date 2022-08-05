/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 02:43:38 by smia              #+#    #+#             */
/*   Updated: 2022/08/03 03:37:32 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& wp) : wpA(wp)
{
    this->name = name;
}

void HumanA::setWeapon(Weapon& wp)
{
    this->wpA = wp;
}

void HumanA::attack(void)
{
    std::cout << name << " attacks with their " << wpA.getType() << std::endl;
}

HumanA::~HumanA()
{
}
