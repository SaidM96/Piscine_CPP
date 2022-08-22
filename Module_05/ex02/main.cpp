/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:16:18 by smia              #+#    #+#             */
/*   Updated: 2022/08/22 01:40:12 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat a("said", 150);
    Bureaucrat c("safi", 32);
    Bureaucrat q("King", 10);
    ShrubberyCreationForm b("home");
    b.beSigned(a);
    b.execute(a);
    RobotomyRequestForm d("robot");
    d.beSigned(c);
    d.execute(c);
    PresidentialPardonForm s("wiwiw");
    s.beSigned(q);
    s.execute(q);
}