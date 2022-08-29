/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:19:20 by smia              #+#    #+#             */
/*   Updated: 2022/08/29 16:38:01 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{   
}

Span::~Span()
{   
}

Span::Span(Span const & cp)
{
    integers = cp.integers;
    N = cp.N;
}

void Span::operator=(Span const &cp)
{
    integers = cp.integers;
    N = cp.N;
}

Span::Span(unsigned int n)
{
    if (n > 0)
        N = n;
    else
        throw std::invalid_argument("Size must be positif");
}

void Span::addNumber(int num)
{
    if (integers.size() < (size_t)N)
    {
        integers.push_back(num);
    }
    else
        throw std::invalid_argument("Max elements stored");
}
// there are no numbers stored, or only one, no span can be found

int Span::shortestSpan(void)
{
    int i = 0;
    int sub = 0;
    int ret = 0;
    if (integers.empty())
        throw std::invalid_argument("there are no numbers stored");
    if (integers.size() == 1)
        throw std::invalid_argument("only one number is stored");
    std::vector<int> tmp;
    tmp = integers;
    std::vector<int>::iterator it;
    it = tmp.begin();
    while(1337)
    {
        if(*it != *(it + i))
            break ;
        i++;
        if((it + i) == tmp.end())
        {
            throw std::invalid_argument("no span can be found");
            break ;
        }
    }
    std::sort(tmp.begin(),tmp.end());
    while (1337)
    {
        if((it + 1) != tmp.end())
        {
            sub = *(it + 1) - *it;
            if (it == tmp.begin())
                ret = sub;
        }
        else
            break ;
        it++;
        if (ret >= sub)
            ret = sub;
    }
    return (ret);
}

int Span::longestSpan(void)
{
    int i = 0;
    if (integers.empty())
        throw std::invalid_argument("there are no numbers stored");
    if (integers.size() == 1)
        throw std::invalid_argument("only one number is stored");
    std::vector<int> tmp;
    tmp = integers;
    std::vector<int>::iterator it;
    it = tmp.begin();
    while(1337)
    {
        if(*it != *(it + i))
            break ;
        i++;
        if((it + i) == tmp.end())
        {
            throw std::invalid_argument("no span can be found");
            break ;
        }
    }
    std::sort(tmp.begin(),tmp.end());
    return ((int)tmp[tmp.size() - 1] - tmp[0]);
}

void Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
    while (start != end)
    {
        integers.push_back(*start);
        start++;
    }
}