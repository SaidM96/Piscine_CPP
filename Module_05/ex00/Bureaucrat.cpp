/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:16:38 by smia              #+#    #+#             */
/*   Updated: 2022/08/19 21:11:19 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("X")
{
    this->grade = 1;
}

Bureaucrat::Bureaucrat(std::string const Name, int gr) : name(Name)
{
    try
    {
        if (gr < 1)
        {
            this->grade = 1;
            throw GradeTooHighException();
        }
            
        else if (gr > 150 )
        {
            this->grade = 150;
            throw GradeTooLowException();
        }
        else
            this->grade = gr;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(Bureaucrat& cp) : name(cp.name)
{
    try
    {
        if (cp.grade < 1)
        {
            this->grade = 1;
            throw GradeTooHighException();
        }
            
        else if (cp.grade > 150 )
        {
            this->grade = 150;
            throw GradeTooLowException();
        }
        else
            this->grade = cp.grade;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void Bureaucrat::operator=(Bureaucrat& other)
{
    try
    {
        if (other.grade < 1)
        {
            this->grade = 1;
            throw GradeTooHighException();
        }
            
        else if ( other.grade > 150 )
        {
            this->grade = 150;
            throw GradeTooLowException();
        }
            
        else
            this->grade = other.grade;
    }
    catch (std::exception& e)
    {
        
        std::cerr << e.what() << std::endl;
    }
}

std::string Bureaucrat::getName(void) const
{
    return (this->name);
}

int Bureaucrat::getGrade(void) const
{
    return (grade);
}

Bureaucrat::~Bureaucrat()
{
}

void Bureaucrat::increment(void)
{
    try
    {
        if (this->grade == 1)
            throw GradeTooHighException();
        else
            this->grade--;
    }
    catch (std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void Bureaucrat::decrement(void)
{
    try
    {
        if (this->grade == 150)
            throw Bureaucrat::GradeTooLowException();
        else
            this->grade++;
    }
    catch (std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &b)
{
    os << b.getName() <<" , bureaucrat grade is " << b.getGrade();
    return (os);
}