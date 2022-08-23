/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   CheckType.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 01:44:24 by smia              #+#    #+#             */
/*   Updated: 2022/08/23 09:44:01 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

bool infFloat(char *str)
{
    std::string num(str);
    if (num.compare("inff") == 0 || num.compare("+inff") == 0 || num.compare("-inff") == 0 || num.compare("nanf") == 0)
        return true;
    return false;
}

bool infDouble(char *str)
{
    std::string num(str);
    if (num.compare("inf") == 0 || num.compare("+inf") == 0 || num.compare("-inf") == 0 || num.compare("nan") == 0)
        return true;
    return false;
}

bool ft_isdigit(char c)
{
    if (c < '0' || c > '9')
        return (false);
    return (true);
}

bool isChar(char *str)
{
    if (strlen(str) != 1)
        return false;
    if (*str < 32 || *str == 127)
        return false;
    return true;
}

bool isInt(char *str)
{

    int i = 0;

    if (str[i] == '+' || '-')
        i++;
    while (str[i])
    {
        if (ft_isdigit(str[i]))
            i++;
        else
            return (false);
    }
    return true;
}

bool isFloat(char *str)
{
    int i = -1;
    bool point = false;

    if (infFloat(str))
        return (true);
    if (str[i] == '+' || '-')
        i++;
    while (str[i])
    {
        if (ft_isdigit(str[i]))
            i++;
        else
            return (false);
        if (str[i] == '.')
        {
            if (point == false)
                point = true;
            else
                return (false);
            i++;
        }
        if (str[i] && !str[i + 1])
        {
            if (str[i] != 'f')
               return false;
            else
                break ;
        }
    }
    return (true);
}

bool isDouble(char *str)
{
    int i = -1;
    bool point = false;

    if (infDouble(str))
        return true;
    if (str[i] == '+' || '-')
        i++;
    while (str[i])
    {
        if (ft_isdigit(str[i]))
            i++;
        else
            return (false);
        if (str[i] == '.')
        {
            if (point == false)
                point = true;
            else
                return (false);
            i++;
        }
    }
    return (true);
}
