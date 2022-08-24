/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:53:40 by smia              #+#    #+#             */
/*   Updated: 2022/08/24 06:22:46 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
    Base* ptr1 = generate();
    Base* ptr2;
    Base  base;
    ptr2 = generate();
    identify(*ptr1);
    identify(ptr2);
    identify(base);
    identify(&base);
    delete ptr1;
    delete ptr2;
}