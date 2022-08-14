/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 22:14:57 by smia              #+#    #+#             */
/*   Updated: 2022/08/15 00:36:10 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :  public ScavTrap ,  public FragTrap
{
    private:
        std::string Name;
    public:
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(DiamondTrap& c);
        void operator=(DiamondTrap& c);
        using ScavTrap::attack;
        void whoAmI(void);
};

#endif