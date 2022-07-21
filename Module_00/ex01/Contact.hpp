/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 13:35:22 by smia              #+#    #+#             */
/*   Updated: 2022/07/21 17:58:44 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
    
class Contact
{
    public:
        std::string f_name;
        std::string l_name;
        std::string nick_name;
        std::string ph_number;
        std::string d_secret;
};
#endif
