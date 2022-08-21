/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/18 20:16:18 by smia              #+#    #+#             */
/*   Updated: 2022/08/21 02:31:24 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{

	Bureaucrat X1("X1", 1);
    Bureaucrat X2("X2", 150);
    Form form1("form1", 42, 52);
 
    std::cout << form1;
    form1.beSigned(X1);
	X1.signForm(form1);
    std::cout << form1;
    form1.beSigned(X2);
    Form form2("form2", 42, 0);
    Form form3("form3", 190, 42);

	return 0;
}