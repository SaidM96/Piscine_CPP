/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 04:06:44 by smia              #+#    #+#             */
/*   Updated: 2022/08/16 04:19:41 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <Animal.hpp>

class Brain
{
    protected:
        std::string ideas[100];
    public :
        Brain();
        ~Brain();
        Brain(Brain& cp);
        void operator=(Brain& cp);
        Brain(std::string idea);
};

#endif