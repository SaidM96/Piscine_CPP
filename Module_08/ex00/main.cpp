/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 10:55:50 by smia              #+#    #+#             */
/*   Updated: 2022/08/27 18:05:35 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "easyfind.hpp"

 int main()
 {
    std::vector<int> IntArray;
    for(int i = 0; i < 4; i++)
        IntArray.push_back(i);
    try
    {
        for(int i = 0; i < 4; i++)
            std::cout << *easyfind(IntArray,i) << " ";
        std::cout << std::endl;
        std::cout << *easyfind(IntArray,17) << std::endl;
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "    ------" << std::endl;
    std::vector<char> CharArray;
    for(int i = 0; i < 4; i++)
        CharArray.push_back(97 + i);
    try
    {
        for(int i = 0; i < 4; i++)
            std::cout << *easyfind(CharArray,97 + i) << " ";
        std::cout << std::endl;
        std::cout << *easyfind(CharArray,'c') << std::endl;
        std::cout << *easyfind(CharArray,'e') << std::endl;
    }
    catch(const std::invalid_argument& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
 }