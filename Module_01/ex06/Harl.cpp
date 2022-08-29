/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 05:59:48 by smia              #+#    #+#             */
/*   Updated: 2022/08/08 15:53:01 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void	Harl::debug()
{
	std::cout << "[ DEBUG ] "<< std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do! " <<std::endl;
    std::cout << std::endl;
}

void	Harl::info()
{
	std::cout << "[ INFO ] " << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
    std::cout << std::endl;
}

void	Harl::warning()
{
    std::cout << "[ WARNING ]" << std:: endl;
	std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl;
    std::cout << std::endl;
}

void	Harl::error()
{
	std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
    std::cout << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*funcs[4])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

	int i;
	i = ("DEBUG" == level) * 5
		+ ("INFO" == level) * 6
		+ ("WARNING" == level) * 7
		+ ("ERROR" == level) * 8;
    if (i == 0)
    {
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
        return ;
    }
    i -= 5;
	switch (i)
	{
	    case 0:
		    (this->*funcs[i++])();
	    case 1:
		    (this->*funcs[i++])();
	    case 2:
		    (this->*funcs[i++])();
	    case 3:
		    (this->*funcs[i++])();
	}
}