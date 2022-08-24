/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wiwiw.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 00:36:51 by smia              #+#    #+#             */
/*   Updated: 2022/08/24 00:36:53 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	identifyREF(Base& base)
{
	Base	check;
	try
	{
		check = dynamic_cast<A&>(base);
		std::cout << "Real class: A" << std::endl;
	}
	catch(std::exception& e)
	{
		try
		{
			check = dynamic_cast<B&>(base);
			std::cout << "Real class: B" << std::endl;
		}
		catch(std::exception& e)
		{
			try
			{
				check = dynamic_cast<C&>(base);
				std::cout << "Real class: C" << std::endl;
			}
			catch(std::exception& e)
			{
				std::cerr << "can't cast reference because ";
				std::cerr << e.what() << std::endl;
			}
		}
	}
}

int main()
{
	Base* var1 = new(std::nothrow) A();
	if (var1 == NULL)
	{
		std::cerr << "bad allocation" << std::endl;
		return -1;
	}

	Base* var2 = new(std::nothrow) B();
	if (var2 == NULL)
	{
		std::cerr << "bad allocation" << std::endl;
		return -1;
	}

	Base* var3 = new(std::nothrow) C();
	if (var3 == NULL)
	{
		std::cerr << "bad allocation" << std::endl;
		return -1;
	}

	Base* var4 = new(std::nothrow) Base();
	if (var4 == NULL)
	{
		std::cerr << "bad allocation" << std::endl;
		return -1;
	}

	Base	base;
	A		a;
	B		b;
	C		c;
	Base&	refA = a;
	Base&	refB = b;
	Base&	refC = c;
	Base&	refBase = base;

	std::cout << ">> test pointer cast <<\n";
	identifyPTR(var1);
	identifyPTR(var2);
	identifyPTR(var3);
	identifyPTR(var4);
	identifyPTR(&refB);

	std::cout << std::endl;
	std::cout << ">> test reference cast <<\n";
	identifyREF(refA);
	identifyREF(refB);
	identifyREF(refC);
	identifyREF(refBase);
	identifyREF(*var1);

	delete var1;
	delete var2;
	delete var3;
	delete var4;

	std::cout << std::endl;
	std::cout << ">> test reference cast <<\n";

	Base*	random = generate();
	if (random == NULL)
	{
		std::cerr << "bad allocation" << std::endl;
		return -1;
	}
	identifyPTR(random);

	delete random;

}