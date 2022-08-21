/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:42:56 by smia              #+#    #+#             */
/*   Updated: 2022/08/21 10:06:36 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Zaphod", 25, 5)
{
    this->target = "";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Zaphod", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& cp) : Form("Zaphod", 25, 5)
{
    this->target = cp.target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void PresidentialPardonForm::operator=(PresidentialPardonForm& c)
{
    this->target = c.target;
    Form::operator=(c);
}

std::string PresidentialPardonForm::get_target(void)
{
    return target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    executor.signForm(*this);
    if (executor.getGrade() <= get_grade_ex() && IsSigned())
    {
        std::cout << target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    else
        std::cout << target << " failed to be pardoned by Zaphod Beeblebrox" << std::endl;
}