/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:37:44 by smia              #+#    #+#             */
/*   Updated: 2022/08/28 17:08:28 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    // 
    try
    {
        Span sp1 = Span(5);
        sp1.addNumber(6);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);
        sp1.addNumber(11);
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
    }
    //
    try
    {
        Span sp2 = Span(5);
        sp2.addNumber(11);
		sp2.addNumber(11);
		sp2.addNumber(11);
		sp2.addNumber(11);
		sp2.addNumber(11);
        std::cout << sp2.shortestSpan() << std::endl;
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
    }
    //
    try
    {
        Span sp3 = Span(5);
        sp3.addNumber(11);
        std::cout << sp3.shortestSpan() << std::endl;
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
    }
    //
    try
    {
        Span sp4 = Span(5);
        std::cout << sp4.shortestSpan() << std::endl;
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
    }
    //
	try
	{
		Span sp5 = Span(5);
		sp5.addNumber(6);
		sp5.addNumber(3);
		sp5.addNumber(17);
		sp5.addNumber(9);
		sp5.addNumber(11);
		std::cout << sp5.shortestSpan() << std::endl;
		std::cout << sp5.longestSpan() << std::endl;
		std::cout << std::endl;

		Span sp = Span(1000000);
		std::vector<int> nums;
		srand(time(NULL));
		for (int i = 0; i < 10000; i++)
		{
			nums.push_back(rand());
		}
		sp.addNumber(nums.begin(), nums.end());
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
    catch(const std::invalid_argument& e)
    {
        std::cout << e.what() << '\n';
    }
    return 0;
}