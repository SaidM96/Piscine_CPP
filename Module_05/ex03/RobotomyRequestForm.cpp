/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:07:46 by smia              #+#    #+#             */
/*   Updated: 2022/08/22 01:34:19 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Roboto", 72, 45)
{
    this->target = "";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("Roboto", 72, 45)
{
    this->target = target;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& cp) : Form("Roboto", 72, 45)
{
    this->target = cp.target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

void RobotomyRequestForm::operator=(RobotomyRequestForm& c)
{
    this->target = c.target;
    Form::operator=(c);
}

std::string RobotomyRequestForm::get_target(void)
{
    return target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
        srand(time(0));
        executor.executeForm(*this);
        if (executor.getGrade() <= get_grade_ex() && IsSigned())
        {
            if (rand() & 1)
            {
                
                std::cout << target << " has been robotomized successfully 50% of the time" << std::endl;
            }
            else
                std::cout << target << " : robotomy failed." << std::endl;
        }
            
        
}