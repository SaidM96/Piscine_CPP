/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 03:25:45 by smia              #+#    #+#             */
/*   Updated: 2022/08/16 03:42:16 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WrongAnimal_HPP
#define WrongAnimal_HPP

#include <iostream>

class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string Type);
        WrongAnimal(WrongAnimal& x);
        void operator=(WrongAnimal& x);
        ~WrongAnimal();
        void makeSound(void) const;
        std::string getType(void) const;
        void setType(std::string newType);
};

#endif