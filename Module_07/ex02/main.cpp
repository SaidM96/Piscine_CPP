/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 15:45:54 by smia              #+#    #+#             */
/*   Updated: 2022/08/26 13:33:36 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main(void)
{
    unsigned int size;
    size = 20;
    Array<int> tab(size);

    for (unsigned int i(0); i < size; i++)
    {
        tab[i] = 1 + i;
        std::cout << tab[i] << " ";
    }
    std::cout << std::endl;
    Array<int> tab1(15);
    tab1 = tab;
    for (unsigned int i(0); i < size; i++)
    {
        std::cout << tab1[i] << " ";
    }
    std::cout << std::endl;
    try
    {
        std::cout << tab[201];
    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}