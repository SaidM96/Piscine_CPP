/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:05:23 by smia              #+#    #+#             */
/*   Updated: 2022/08/13 18:10:09 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    protected:
        std::string Name;
        int pv;
        int energie;
        int damage;
    public:
        ClapTrap();
        ~ClapTrap();
        ClapTrap(std::string Name);
        ClapTrap(int pv, int energ, int damage);
        ClapTrap(const ClapTrap& c);
        void operator=(const ClapTrap& c);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif