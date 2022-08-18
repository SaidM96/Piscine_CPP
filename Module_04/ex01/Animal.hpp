/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 16:15:10 by smia              #+#    #+#             */
/*   Updated: 2022/08/17 19:56:53 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string Type);
        Animal(Animal& x);
        void operator=(Animal& x);
        virtual ~Animal();
        virtual void  makeSound(void) const; 
        std::string getType(void) const;
        void setType(std::string newType);
};

#endif