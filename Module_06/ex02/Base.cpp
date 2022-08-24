/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 10:51:21 by smia              #+#    #+#             */
/*   Updated: 2022/08/24 06:22:31 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base()
{
}

Base *generate(void)
{
	static int number = -1;
	srand(time(0));
	int	random;
	do{
		random = rand() % 3;
	}
	while(random == number);
	number = random;
    switch (random)
    {
        case 0:
            return (new A());
        case 1:
            return (new B());
        case 2:
            return (new C());
    }
    return (NULL);
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
    {
        std::cout << "actual type of the object p : A" << std::endl;
        return ;
    }
    if (dynamic_cast<B*>(p))
    {
        std::cout << "actual type of the object p : B" << std::endl;
        return ;
    }
    if (dynamic_cast<C*>(p))
    {
        std::cout << "actual type of the object p : C" << std::endl;
        return ;
    }
    std::cout << "P pointer has to point to a class A , B or B" << std::endl;

}

void identify(Base& p)
{
    try
    {
        Base& a =  dynamic_cast<A&>(p);
        (void) a;
        std::cout << "actual type of the object p: A" << std::endl;
    }
    catch(const std::exception& e)
    { 
        try
        {
            Base& b = dynamic_cast<B&>(p);
            (void) b;
            std::cout << "actual type of the object p: B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                Base& c = dynamic_cast<C&>(p);
                (void) c;
                std::cout << "actual type of the object p: C" << std::endl;
            }
            catch(std::exception& e)
            {
                std::cout << "P  has to reference to a class A , B or B" << std::endl;
            }
        }
    }
   
    
}


