/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 20:11:10 by smia              #+#    #+#             */
/*   Updated: 2022/08/15 00:42:57 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap a("said");
    DiamondTrap b("adam");
    DiamondTrap c(b);

    c = a;
    a.attack("adam");
    b.takeDamage(30);
    a.whoAmI();
}