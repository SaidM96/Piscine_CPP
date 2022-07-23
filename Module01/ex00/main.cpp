/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 14:34:09 by smia              #+#    #+#             */
/*   Updated: 2022/07/22 17:03:36 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::cout << "Creat the First zombie in stack named : said" << std::endl;
	Zombie	z1("said");
	z1.announce();
	
	std::cout << "Creat the Secound zombie in heap named : adam" << std::endl;
	Zombie	*z2 = newZombie("adam");
	z2->announce();
	delete z2;
	
	std::cout << "Creat the Third zombie named : sami" << std::endl;
	randomChump("sami");
}