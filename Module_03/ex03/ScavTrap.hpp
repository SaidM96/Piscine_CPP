/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 15:16:54 by smia              #+#    #+#             */
/*   Updated: 2022/08/15 00:12:20 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
    public:
        ScavTrap();
        ~ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap& c);
        void operator=(ScavTrap& c);
        void guardGate();
        void attack(std::string const &target);
};
#endif