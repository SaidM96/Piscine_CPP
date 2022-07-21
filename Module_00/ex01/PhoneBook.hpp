/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 17:57:48 by smia              #+#    #+#             */
/*   Updated: 2022/07/21 17:59:57 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
    public:
        int     n_contact;
        int     add_contact();
        void    rm_oldest();
        int     Add();
        void    print_table();
        void    Search(int i);
        int     print_phbook();

        PhoneBook();
        ~PhoneBook();
};

#endif