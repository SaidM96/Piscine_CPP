/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:07:05 by smia              #+#    #+#             */
/*   Updated: 2022/08/21 09:38:25 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class RobotomyRequestForm : public Form
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm& cp);
        void operator=(RobotomyRequestForm& c);
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        std::string get_target(void);
        void execute(Bureaucrat const & executor) const;
};

#endif