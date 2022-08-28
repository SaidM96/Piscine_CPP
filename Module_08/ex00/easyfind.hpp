/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:56:08 by smia              #+#    #+#             */
/*   Updated: 2022/08/27 16:52:17 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <iterator>
#include <iostream>
#include <exception>

template <typename T>
typename T::iterator easyfind(T c, int i)
{
    typename T::iterator it;
    it = std::find(c.begin(),c.end(), i);
    if (it != c.end())
        return it;
    throw std::invalid_argument("no occurrence is found");
}

#endif