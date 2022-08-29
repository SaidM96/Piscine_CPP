/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:13:49 by smia              #+#    #+#             */
/*   Updated: 2022/08/29 11:58:43 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <deque>
#include <algorithm>


template <typename T, class Cont = std::deque<T> >
class MutantStack : public  std::stack<T, Cont>
{
    public:
        MutantStack(){}
        MutantStack(MutantStack const &cp){*this = cp;}
        ~MutantStack(){}
        MutantStack &operator=(const MutantStack &cp)
        {
            std::stack<T, Cont>::operator=(cp);
			return *this;
        }
        typedef typename Cont::iterator iterator;
        typedef typename Cont::const_iterator const_iterator;
        iterator begin(){return this->c.begin();}
        const_iterator cbegin(){return this->c.cbegin();}
        iterator end(){return this->c.end();}
        const_iterator cend(){return this->c.cend();}
};

#endif