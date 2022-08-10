/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 00:49:51 by smia              #+#    #+#             */
/*   Updated: 2022/08/06 10:02:42 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    int i = 0;
    
    if (N <= 0)
    {
        std::cout << "enter a number > 0" << std::endl;
        return NULL; 
    }
    Zombie *z = new Zombie[N];
    while (i < N)
    {
        z[i].set_name(name);
        z[i].announce();
        i++;
    }
    return z;
}
