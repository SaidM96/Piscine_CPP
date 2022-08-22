/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:16:31 by smia              #+#    #+#             */
/*   Updated: 2022/08/22 00:37:45 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat
{
    private:
        std::string const name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(Bureaucrat& cp);
        void operator=(Bureaucrat& other);
        ~Bureaucrat();
        Bureaucrat(std::string const Name, int gr);
        std::string getName(void) const;
        int getGrade(void) const;
        void increment(void);
        void decrement(void);

        class GradeTooHighException : public std::exception
		{
			public:
				    GradeTooHighException(){}
                    const char* what() const throw()
                    {
                        return "Grade is too high , max grade is 1";
                    }
        };
        class GradeTooLowException : public std::exception 
		{
			public:
				    GradeTooLowException() {}
                    const char* what() const throw()
                    {
                        return "Grade too low , min grade is 150";
                    }
        };
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif