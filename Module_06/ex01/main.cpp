/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 09:56:57 by smia              #+#    #+#             */
/*   Updated: 2022/08/23 10:41:30 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main ()
{
    Data data;
    data.age = 26;
    data.name = "Said";

    Data* ptr = &data;
    uintptr_t raw;

    raw = serialize(ptr);
    ptr = deserialize(raw);
    std::cout << ptr->age << std::endl;
    std::cout << ptr->name << std::endl;
}