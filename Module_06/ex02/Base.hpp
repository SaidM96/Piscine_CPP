/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:50:21 by smia              #+#    #+#             */
/*   Updated: 2022/08/23 11:08:30 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

class Base
{
    public :
        virtual ~Base();
};

class A : public Base
{
};

class B : public Base
{ 
};

class C : public Base
{
};

Base * generate(void);
#endif