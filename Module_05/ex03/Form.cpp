/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/20 00:16:06 by smia              #+#    #+#             */
/*   Updated: 2022/08/22 02:25:46 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name(""), grade_signe(0), grade_ex(0)
{
    this->x = 0;
}

Form::~Form()
{
}

Form::Form(std::string Name, int gr_signe, int gr_ex) : name(Name), grade_signe(gr_signe), grade_ex(gr_ex)
{
    this->x = 0;
    try
    {
        if (gr_signe < 1 || gr_ex < 1)
            throw GradeTooHighException();
        if (gr_signe > 150 || gr_ex > 150)
            throw GradeTooLowException();

    }
    catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}


void Form::operator=(Form& other)
{
    x = other.x;
}

Form::Form(Form& cp) : name(cp.name), grade_signe(cp.grade_signe), grade_ex( cp.grade_ex)
{
    this->x = cp.x;
}

void Form::beSigned(Bureaucrat &c)
{
    try
    {
        if (c.getGrade() > grade_signe)
                throw GradeTooLowException();
        else
        {
            x = true;
            std::cout << c.getName() << " signed " << name << std::endl;
        }
            
    }
    catch(std::exception &e)
    {
        std::cout << c.getName() << " couldn't sign " << name ;
        std::cout << " because " << e.what()<< std::endl;
    }
}

int  Form::get_grade_signe(void) const
{
    return (grade_signe);
}

int  Form::get_grade_ex(void) const
{
    return (grade_ex);
}

std::string const Form::get_name(void) const
{
    return (name);
}

std::string Form::isSigned(void) const
{
    if (x == true)
        return ("signed");
    return ("unsigned");
}

std::ostream &operator<<(std::ostream &os,  Form &c)
{
    os << "Name : " << c.get_name() << std::endl;
    os << "Grade require to signed : " << c.get_grade_signe() << std::endl;
    os << "Grade require to execut : " << c.get_grade_ex() << std::endl;
    os << "Status: " << c.isSigned() << std::endl;
    return os;
}

void Form::set_bool(bool x)
{
    this->x = x;
}

int Form::IsSigned(void) const
{
    if (x == true)
        return (1);
    return (0);
}