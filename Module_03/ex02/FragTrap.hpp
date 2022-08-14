/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 22:23:41 by smia              #+#    #+#             */
/*   Updated: 2022/08/13 23:12:49 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"
class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        ~FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap& c);
        void operator=(FragTrap& c);
        void highFivesGuys(void);
        void attack(std::string const &target);
};
#endif