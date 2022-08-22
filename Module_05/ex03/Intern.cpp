/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 02:18:46 by smia              #+#    #+#             */
/*   Updated: 2022/08/22 06:56:48 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern()
{
    typeForm[0] = "shrubbery creation";
    typeForm[1] = "roboto request";
    typeForm[2] = "presidential pardon";
}

Intern::~Intern()
{
}

Intern::Intern(Intern &cp)
{
    typeForm[0] = cp.typeForm[0];
    typeForm[1] = cp.typeForm[1];
    typeForm[2] = cp.typeForm[2];
}

void Intern::operator=(Intern &other)
{
    typeForm[0] = other.typeForm[0];
    typeForm[1] = other.typeForm[0];
    typeForm[2] = other.typeForm[0];
}

int Intern::checkForm(std::string &namef)
{
    for(int i = 0; i < 3 ; i++)
    {
        if (typeForm[i] == namef)
            return (i);
    }
    return (3);
}

Form* Intern::makeForm(std::string nameForm, std::string target)
{
    Form* ret = NULL;

    try
    {
        int i = checkForm(nameForm);
        switch(i)
        {
            case 0:
                ret = new ShrubberyCreationForm(target);
                return (ret);
            case 1:
                ret = new RobotomyRequestForm(target);
                return (ret);
            case 2:
                ret = new PresidentialPardonForm(target);
                return (ret);
            case 3:
                throw WrongFormExeption();
        }
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    } 
    return (ret);
}