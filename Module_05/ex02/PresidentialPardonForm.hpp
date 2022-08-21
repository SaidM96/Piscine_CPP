/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 09:42:50 by smia              #+#    #+#             */
/*   Updated: 2022/08/21 09:44:10 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"


class PresidentialPardonForm : public Form
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm& cp);
        void operator=(PresidentialPardonForm& c);
        ~PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        std::string get_target(void);
         void execute(Bureaucrat const & executor) const;
};
#endif