/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:53:01 by smia              #+#    #+#             */
/*   Updated: 2022/07/18 15:41:19 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    int i = 1;
    int j = 0;
    
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        while (av[i])
        {
        j = 0;
        while (av[i][j])
            {
                std::cout << (char)std::toupper(av[i][j]);
                j++;
            }
        i++;
        }
        std::cout << std::endl;
    }
    return (0);
}