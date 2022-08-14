/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:05:23 by smia              #+#    #+#             */
/*   Updated: 2022/08/12 14:13:46 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string Name;
        int pv;
        int energie;
        int damage;
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(const ClapTrap& c);
        void operator=(const ClapTrap& c);
        ClapTrap(std::string Name);
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif