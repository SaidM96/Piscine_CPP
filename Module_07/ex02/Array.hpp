/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 17:10:44 by smia              #+#    #+#             */
/*   Updated: 2022/08/26 13:48:59 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T> class Array
{
    private:
        T* array;
        unsigned int sizeArray;
    public:
        Array() : array(NULL), sizeArray(0){}
        ~Array(){delete [] array;}
        Array(Array& cp)
        {
            sizeArray = cp.sizeArray;
            array = new  T[sizeArray];
            for(unsigned int i = 0; i < sizeArray; i++)
                array[i] = cp.array[i];
        }
        Array(unsigned int n)
        {
            sizeArray = n;
            array = new T[sizeArray];
        }
        Array& operator=(Array& cp)
        {
            sizeArray = cp.sizeArray;
            delete [] array;
            array = new  T[sizeArray];
            for(unsigned int i = 0; i < sizeArray; i++)
                array[i] = cp.array[i];
            return (*this);
        }
        class WrongArrayIndex : public std::exception
		{

			public:
				    WrongArrayIndex(){}
                    virtual const char* what() const throw()
                    {
                        return "std::exception : index is out of bounds!";
                    }
        };
        T& operator[](unsigned int index)
        {
            if (index >= sizeArray || index < 0)
                throw WrongArrayIndex();
            return (array[index]);
        }
        const T& operator[](unsigned int index) const 
        {
            if (index >= sizeArray || index < 0)
                throw std::exception();
            return (array[index]);
        }
        unsigned int size(void) const {return (sizeArray);}
};
#endif

