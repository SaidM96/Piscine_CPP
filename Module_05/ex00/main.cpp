/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:16:18 by smia              #+#    #+#             */
/*   Updated: 2022/08/22 00:27:26 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{

	Bureaucrat br0;
	Bureaucrat br1("Bureaucrat2", 24);
	Bureaucrat br2("Bureaucrat3", 0);
	Bureaucrat br3("Bureaucrat4", 150);
	Bureaucrat br4("Bureaucrat5", 1);
	Bureaucrat br5("Bureaucrat6", 151);
	std::cout << br5 << std::endl;
	br5.increment();
	std::cout << br5 << std::endl;
	br5.decrement();
	br5.decrement();
	br5.decrement();
	std::cout << br5 << std::endl;
	br5.increment();
	std::cout << br5 << std::endl;
	return 0;
}