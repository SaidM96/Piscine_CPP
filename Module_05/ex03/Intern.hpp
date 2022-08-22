/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 02:18:56 by smia              #+#    #+#             */
/*   Updated: 2022/08/22 04:45:20 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <iostream>
#include "Form.hpp"

class Intern
{
    private:
        std::string typeForm[3];
    public:
        Intern();
        Intern(Intern &cp);
        ~Intern();
        void operator=(Intern &other);
        int checkForm(std::string &namef);
        Form* makeForm(std::string nameForm, std::string target);
        class WrongFormExeption : public std::exception
		{
			public:
                WrongFormExeption() {}
				const char* what() const throw()
                {
                    return "Intern : Wrong Form";
                }
		};
};
#endif