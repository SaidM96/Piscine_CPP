/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:11:10 by smia              #+#    #+#             */
/*   Updated: 2022/08/12 15:07:57 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a;
    a = ClapTrap("said");
    ClapTrap b("gogo");
    
    b.attack("said");
    a.takeDamage(0);
    a.attack("gogo");
    b.takeDamage(0);
    a.beRepaired(15);
}