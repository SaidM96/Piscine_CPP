/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 17:13:49 by smia              #+#    #+#             */
/*   Updated: 2022/08/28 19:05:56 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <list>

template <typename T, class D = std::deque<T> > 
class MutantStack : public std::stack<T, D>
{
    public:
        MutantStack() : MutantStack<T>::stack(){}
        MutantStack(MutantStack const &cp): MutantStack<T, D>::stack(cp){}
        ~MutantStack();
        MutantStack<T, D> &operator=(MutantStack const &cp)
        {
            MutantStack<T>::stack::operator=(cp);
			return *this;
        }
        typedef typename MutantStack<T,D>::stack::container_type::iterator iterator;
        typedef typename MutantStack<T,D>::stack::container_type::const_iterator const_iterator;
        iterator begin(){return this->d.begin();}
        const_iterator cbegin(){return this->D.cbegin();}
        iterator end(){return this->D.end();}
        const_iterator cend(){return this->D.cend();}
        
        
};

#endif