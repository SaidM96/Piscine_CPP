/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 03:17:31 by smia              #+#    #+#             */
/*   Updated: 2022/08/22 01:38:32 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyForm", 145, 137)
{
    this->target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyForm", 145, 137)
{
    this->target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& cp) : Form("ShrubberyForm", 145, 137)
{
    this->target = cp.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

void ShrubberyCreationForm::operator=(ShrubberyCreationForm& c)
{
    this->target = c.target;
    Form::operator=(c);
}

std::string ShrubberyCreationForm::get_target(void)
{
    return target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
        executor.executeForm(*this);
        if (executor.getGrade() <= get_grade_ex() && IsSigned())
        {
            std::string fileName = target + "_Shrubbery";
            std::ofstream outfile(fileName);
            outfile << 
            "                                    .\n"
            "                                      .         ;\n"
            "         .              .              ;%     ;; \n"
            "           ,           ,                :;%  %;   \n"
            "            :         ;                   :;%;'     .,   \n"
            "   ,.        %;     %;            ;        %;'    ,;\n"
            "     ;       ;%;  %%;        ,     %;    ;%;    ,%'\n"
            "      %;       %;%;      ,  ;       %;  ;%;   ,%;' \n"
            "       ;%;      %;        ;%;        % ;%;  ,%;'\n"
            "        `%;.     ;%;     %;'         `;%%;.%;'\n"
            "         `:;%.    ;%%. %@;        %; ;@%;%'\n"
            "            `:%;.  :;SM%;          %;@%;'\n"
            "              `@%:.  :;%.         ;@@%;'  \n" 
            "                `@%.  `;@%.      ;@@%;    \n"     
            "                  `@%%. `@%%    ;@@%;     \n"   
            "                    ;@%. :@%%  %@@%;      \n" 
            "                      %@SM%%%SM%%:;     \n"
            "                        #@%%%%%:;;\n"
            "                        %@@%%%::;\n"
            "                        %@@@%(o);  . '    \n"     
            "                        %@@@o%;:(.,'     \n"    
            "                    `.. %@@@o%::;       \n"  
            "                       `)@@@o%::;       \n"  
            "                        %@@(o)::;       \n" 
            "                       .%@@@@%::;        \n" 
            "                       ;%@@@@%::;.       \n"   
            "                      ;%@@@@%%:;;;. \n"
            "                  ...;%@@@@@%%:;;;;,.."<< std::endl;
        }
}