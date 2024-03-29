/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:07:13 by smia              #+#    #+#             */
/*   Updated: 2022/08/29 16:37:45 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

class Span
{
    private:
        std::vector<int>    integers;
        unsigned int        N;
    public:
        Span();
        Span(unsigned int n);
        Span(Span const &cp);
        void operator=(Span const &cp);
        ~Span();
        void addNumber(int num);
        int shortestSpan(void);
        int longestSpan(void);
        void addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end);
};


#endif