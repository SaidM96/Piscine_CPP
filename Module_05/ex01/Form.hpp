/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:15:53 by smia              #+#    #+#             */
/*   Updated: 2022/08/21 02:26:39 by smia             ###   ########.fr       */
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
        int  get_grade_signe(void);
        void set_bool(bool x);
        int  get_grade_ex(void);
        std::string isSigned(void);
        std::string const get_name(void);
        
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

std::ostream &operator<<(std::ostream &os,  Form &c);

#endif