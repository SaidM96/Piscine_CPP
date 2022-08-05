/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 01:39:01 by smia              #+#    #+#             */
/*   Updated: 2022/08/03 01:51:30 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string  string = "HI THIS IS BRAIN";
    std::string* stringPTR = &string;
    std::string& stringREF = string;
     
    std::cout << "The memory address of the string variable : " << &string << std::endl;
    std::cout << "The memory address held by stringPTR. : " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF. : " <<  &stringREF << std::endl;
    
    std::cout << "The value of the string variable : " << string << std::endl;
    std::cout << "The value pointed to by stringPTR : " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF : " <<  stringREF << std::endl;
}