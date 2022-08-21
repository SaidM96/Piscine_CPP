/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:15:53 by smia              #+#    #+#             */
/*   Updated: 2022/08/21 04:55:29 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;
class Form
{
    private:
        std::string const name;
        bool x;
        int const grade_signe;
        int const grade_ex;
    public:
        Form();
        ~Form();
        Form(Form& cp);
        void operator=(Form& other);
        Form(std::string name, int gr_signe, int gr_ex);
        void beSigned(Bureaucrat &c);
        int  get_grade_signe(void) const;
        void set_bool(bool x);
        int  get_grade_ex(void) const;
        std::string isSigned(void) const;
        int IsSigned(void) const;
        std::string const get_name(void) const;

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
        class NotSignedException : public std::exception
		{
			public:
                NotSignedException() {}
				virtual const char* what() const throw()
                {
                    return "Form is not signed";
                }
		};
        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream &operator<<(std::ostream &os,  Form &c);

#endif