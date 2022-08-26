/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 08:53:02 by smia              #+#    #+#             */
/*   Updated: 2022/08/25 11:16:56 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <class DataType>
void swap(DataType& x, DataType& y)
{
    DataType z;
    z = x;
    x = y;
    y = z;
}

template <class DataType>
DataType min(DataType x, DataType y)
{
    if (x < y)
        return (x);
    return (y);
}

template <class DataType>
DataType max(DataType x, DataType y)
{
    if (x > y)
        return (x);
    return (y);
}

#endif