/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:16:31 by smia              #+#    #+#             */
/*   Updated: 2022/08/21 02:12:22 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Form;
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
        void signForm(Form &c);
        class GradeTooHighException : public std::exception
		{

			public:
				    GradeTooHighException(){}
                    virtual const char* what() const throw()
                    {
                        return "Grade is too high";
                    }
        };
        class GradeTooLowException : public std::exception 
		{

			public:
				    GradeTooLowException() {}
                    virtual const char* what() const throw()
                    {
                        return "Grade too low";
                    }
        };
        
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b);

#endif