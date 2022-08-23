/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:19:43 by smia              #+#    #+#             */
/*   Updated: 2022/08/23 10:26:51 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t serialize(Data* ptr)
{
    uintptr_t ret;
    
    ret = reinterpret_cast<uintptr_t>(ptr);
    return (ret);
}

Data* deserialize(uintptr_t raw)
{
    Data* ret;

    ret = reinterpret_cast<Data *>(raw);
    return ret;
}