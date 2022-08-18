/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 17:56:50 by smia              #+#    #+#             */
/*   Updated: 2022/08/18 01:52:06 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"


int main()
{
    Animal *hiwan = new Cat();
    if (hiwan == NULL)
	{
		std::cout << "allocation failed " << std::endl;
		exit (EXIT_FAILURE);
	}
    delete hiwan;
    Animal *X[10];
    for(int i = 0; i < 10; i++)
    {
        if (i & 1)
        {
            X[i] = new Cat();
            if (X[i] == NULL)
	        {
		        std::cout << "allocation failed " << std::endl;
		        exit (EXIT_FAILURE);
	        }
        }
        else
        {
            X[i] = new Dog();
            if (X[i] == NULL)
	        {
		        std::cout << "allocation failed " << std::endl;
		        exit (EXIT_FAILURE);
	        }
        }
    }
    Dog a;
    Dog b(a);
    b.makeSound();
    for(int i = 0; i < 10; i++)
        X[i]->makeSound();
    for(int i = 0; i < 10; i++)
        delete X[i];
    return (0);
}

