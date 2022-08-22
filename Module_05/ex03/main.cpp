/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:16:18 by smia              #+#    #+#             */
/*   Updated: 2022/08/22 05:03:15 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat br1("br1", 1);
    Bureaucrat br2("br2", 101);
    Intern stagair1;
    Intern stagair2;

    Form *Shrubbery;
    
    Shrubbery = stagair2.makeForm("dsadwq", "Shrubebery");
    Shrubbery = stagair1.makeForm("shrubbery creation", "Shrubebery");
    Shrubbery->beSigned(br1);
    Shrubbery->execute(br1);
    Shrubbery->execute(br2);
    std::cout << *Shrubbery << std::endl;
    Form *president;
    president = stagair2.makeForm("dsadwq", "president");
    president = stagair1.makeForm("presidential pardon", "president");
    president->execute(br1);
    president->beSigned(br1);
    president->execute(br2);
    president->execute(br1);



    Form *robot;
    robot = stagair2.makeForm("dsadwq", "robot");
    robot = stagair1.makeForm("roboto request", "robot");
    robot->execute(br1);
    robot->beSigned(br1);
    robot->execute(br2);
    robot->execute(br1);

    delete Shrubbery;
    delete robot;
    delete president;
}
