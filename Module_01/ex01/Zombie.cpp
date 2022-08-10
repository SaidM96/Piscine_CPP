/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 00:45:13 by smia              #+#    #+#             */
/*   Updated: 2022/08/03 00:53:56 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::~Zombie()
{
    std::cout << name << " i am alive..." << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

void Zombie::announce()
{
    std::cout << name << " BraiiiiiiinnnzzzZ..." << std::endl;
}