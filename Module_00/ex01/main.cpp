/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:35:00 by smia              #+#    #+#             */
/*   Updated: 2022/07/21 18:03:02 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string	command;
	PhoneBook phonebook;

	std::cout << "ADD Contact   : ADD" << std::endl;	
	std::cout << "Search Contact : SEARCH" << std::endl;
	std::cout << "tfi dow      : EXIT" << std::endl;
	while(1337)
	{
		std::cin >> command;
		if (std::cin.eof())
			return (1);
		else if (command == "ADD")
		{	
			if(phonebook.Add())
				return (1);
		}
		else if(command == "SEARCH")
		{
			if(phonebook.print_phbook())
				return (1);
		}
		else if(command == "EXIT" )
			return (0);
		else
			std::cout << "wrong command : " << command << std::endl;	
	}
	return (0);
}