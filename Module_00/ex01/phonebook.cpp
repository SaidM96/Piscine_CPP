/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 14:34:01 by smia              #+#    #+#             */
/*   Updated: 2022/07/21 18:05:03 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){n_contact = 0;}
PhoneBook::~PhoneBook(){std::cout << "thela...\n";}

// add Contactsd

int PhoneBook::Add()
{
    if (n_contact < 8)
	{
		if(add_contact())
			return (1);
		n_contact++;
	}
	else
	{
		rm_oldest();
		if(add_contact())
			return (1);
		n_contact++;
	}
	return (0);
}

int PhoneBook::add_contact()
{
	std::cout  <<"ADD A NEW CONTACT" <<  std::endl;
	std::cout  << "First Name : " << std::endl;
	if (!(std::cin >> contacts[n_contact].f_name))
        return (1);
	std::cout << "Last Name : " << std::endl;
	if (!(std::cin >> contacts[n_contact].l_name))
        return (1);
	std::cout << "Nick Name : " << std::endl;
	if(!(std::cin >> contacts[n_contact].nick_name))
        return (1);
	std::cout <<"Phone Number : " << std::endl;
	if(!(std::cin >> contacts[n_contact].ph_number))
        return (1);
    std::cout << "Darkest secret : " << std::endl;
	if(!(std::cin >> contacts[n_contact].d_secret))
        return (1);
	std::cout << contacts[n_contact].f_name << " Contact has been Added." << std::endl;
	return (0);
}

void PhoneBook::rm_oldest()
{
    int x = 1;
    while (x < n_contact)
    {
        contacts[x - 1] = contacts[x];
        x++;
    }
    n_contact--;
}

// display a contact

void PhoneBook::Search(int i)
{
	if(i < n_contact && i >= 0)
	{
		std::cout << "First Name : " << contacts[i].f_name << std::endl;
		std::cout << "Last Name : " << contacts[i].l_name << std::endl;
		std::cout << "Nick Name : " << contacts[i].nick_name << std::endl;
		std::cout << "Phone Number : " << contacts[i].ph_number << std::endl;
		std::cout << "Darkest secret :  " << contacts[i].d_secret << std::endl;
	}
	else
		std::cout << "Wrong Index" << std::endl;
}
//  print contact 

std::string check_l(std::string str)
{
	if (str.length() >= 10)
	{
		str = str.substr(0, 9);
		str += ".";
	}
	return (str);
}

void PhoneBook::print_table()
{
    int i;
	
	i = 0;
	std::cout <<" -------------------------------------------"  << std::endl;
	std::cout <<"|"  << "   Index  ";
	std::cout <<"|"  << "FirstName ";
	std::cout <<"|"  << " LastName ";
	std::cout <<"|"  << " NickName ";
	std::cout <<"|" << std::endl;
    while(i < n_contact)
	{
		std::cout <<" -------------------------------------------"  << std::endl;
		std::cout <<"|"  << "     " << i + 1 << "    ";
		std::cout <<"|"  << std::setw(10) << check_l(contacts[i].f_name);
		std::cout <<"|"  << std::setw(10) << check_l(contacts[i].l_name);
		std::cout <<"|"  << std::setw(10) << check_l(contacts[i].nick_name);
		std::cout <<"|"  << std::endl;
		i++;
	}
}
int PhoneBook::print_phbook()
{
	int	index;

	index = 0;
	print_table();
	std::cout <<"Put the index of the name : ";
	std::cin >> index;
	if(std::cin.eof())
		return (1);
	else
		Search(index - 1);
	return (0);
}

