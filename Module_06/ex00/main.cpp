/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 01:22:37 by smia              #+#    #+#             */
/*   Updated: 2022/08/23 10:11:03 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"
 
int get_type(char *str)
{
    if (isChar(str))
        return (ch);
    if (isInt(str))
        return (integer);
    if (isFloat(str))
        return (fl);
    if (isDouble(str))
        return (db);
    return (0);
}

int main(int ac, char **av)
{
    int type;

    if (ac != 2)
    {
        std::cout << "Wrong Argument!" << std::endl;
        return (1);
    }
    type = get_type(av[1]);
    switch (type)
    {
        case 0:
            std::cout << "Please enter an integer , float , Double or char! " << std::endl;
            break ;
        case ch:
            CharPrint(av[1]);
            break ;
        case integer:
            IntPrint(std::atoi(av[1]));
            break ;
        case fl:
            FloatPrint(av[1]);
            break ;
        case db:
            DoublePrint(av[1]);
            break ;
    }
    return (0);
}