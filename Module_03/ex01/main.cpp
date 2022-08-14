/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:11:10 by smia              #+#    #+#             */
/*   Updated: 2022/08/13 22:20:40 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap warrior1("warrior1");
	ScavTrap warrior2("warrior2");
	ScavTrap warrior3(warrior1);

	warrior2.attack("warrior1");
	warrior1.takeDamage(20);
	warrior3 = warrior2;
	warrior1.beRepaired(20);
	for(int i = 0; i < 4; i++)
	{
		warrior3.attack("warrior2");
		warrior3.beRepaired(20);
    	warrior2.takeDamage(20);
		warrior2.attack("warrior3");
		warrior2.beRepaired(20);
    	warrior3.takeDamage(20);
	}
	warrior1.guardGate();
	return 0;
}