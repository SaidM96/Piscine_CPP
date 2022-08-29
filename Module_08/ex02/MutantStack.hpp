/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:13:49 by smia              #+#    #+#             */
/*   Updated: 2022/08/29 16:17:27 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>
#include <deque>

template <typename T>
class MutantStack : public  std::stack<T>
{
    public:
        MutantStack(){}
        MutantStack(MutantStack const &cp){*this = cp;}
        ~MutantStack(){}
        MutantStack &operator=(const MutantStack &cp)
        {
            std::stack<T>::operator=(cp);
			return *this;
        }
        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        iterator begin(){return this->c.begin();}
        const_iterator cbegin(){return this->c.cbegin();}
        iterator end(){return this->c.end();}
        const_iterator cend(){return this->c.cend();}
};

#endif