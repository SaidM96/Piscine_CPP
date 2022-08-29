/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrintType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 04:01:02 by smia              #+#    #+#             */
/*   Updated: 2022/08/24 12:11:49 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

void	print_char(int c)
{
	std::cout << "char: ";
	if (c < 0 || c > 126)
		std::cout << "impossible";
	else if (c < 30)
		std::cout << "Non displayable";
	else
		std::cout  << "'" << static_cast<char>(c) << "'";
    std::cout << std::endl;
}

void CharPrint(char *c)
{
    std::cout << "char: " << *c << std::endl;
    std::cout << "int: " << static_cast<int> (*c) << std::endl;
    std::cout << "float: " << static_cast<float> (*c) << ".0f"<< std::endl;
    std::cout << "double: " << static_cast<double> (*c) << ".0"<<std::endl;
}

void IntPrint(double c)
{ 
    print_char(c);
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float> (c) << ".0f" <<  std::endl;
    std::cout << "double: " << c << ".0" <<std::endl;
}

void FloatPrint(char *str)
{
    if (infFloat(str))
    {
        infFloatPrint(str);
        return ;
    }
    float c = std::stof(str);
    if (c == static_cast<int>(c))
        print_char(static_cast<int>(c));
    else
        std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << static_cast<int> (c) << std::endl;
    std::cout << "float: " <<  c << "f" <<  std::endl;
    std::cout << "double: " << static_cast<double> (c) <<std::endl;
}

void DoublePrint(char *str)
{
    if (infDouble(str))
    {
        infDoublePrint(str);
        return ;
    }
    double c = std::stod(str);
    if (c == static_cast<int>(c))
        print_char(static_cast<int>(c));
    else
        std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: " << static_cast<int> (c) << std::endl;
    std::cout << "float: " <<  static_cast<float> (c) << "f" <<  std::endl;
    std::cout << "double: " << c <<std::endl;
}

void    infFloatPrint(char *str)
{
    std::string inf(str);
            
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: "  << "impossible" <<std::endl;
    std::cout << "float: " << inf <<  std::endl;
    std::cout << "double: " << inf.erase(strlen(str) - 1, strlen(str))<< std::endl;
}

void infDoublePrint(char *str)
{
    std::string inf(str);
            
    std::cout << "char: " << "impossible" << std::endl;
    std::cout << "int: "  << "impossible" <<std::endl;
    std::cout << "float: " << inf << "f" <<  std::endl;
    std::cout << "double: " << inf << std::endl;    
}