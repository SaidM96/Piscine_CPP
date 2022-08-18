/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 04:06:44 by smia              #+#    #+#             */
/*   Updated: 2022/08/16 23:20:08 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
    protected:
        std::string ideas[100];
    public :
        Brain();
        ~Brain();
        Brain(Brain const &cp);
        void operator=(Brain const &cp);
        Brain(std::string idea);
        void setIdea(std::string idea);
        std::string* getIdea(void);
};

#endif