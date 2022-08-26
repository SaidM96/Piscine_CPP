/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:03:44 by smia              #+#    #+#             */
/*   Updated: 2022/08/26 13:30:29 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename DataType> void iter(DataType* array, int lenght, void (*func)(DataType const & ))
{
    for (int i = 0; i < lenght; i++)
        (*func)(array[i]);

        
}

template <typename DataType> void PrintIter(DataType const &c)
{
    std::cout << c;
    std::cout << std::endl;
}

#endif