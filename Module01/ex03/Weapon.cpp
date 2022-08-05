/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 02:08:50 by smia              #+#    #+#             */
/*   Updated: 2022/08/03 03:31:32 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void Weapon::setType(std::string new_type)
{
    this->type = new_type;
}

const std::string& Weapon::getType(void)
{
    return (this->type);
}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{
}