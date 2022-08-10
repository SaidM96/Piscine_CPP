/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:42:35 by smia              #+#    #+#             */
/*   Updated: 2022/08/10 17:07:12 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;  
    public:
        Point();
        Point(const float xval, const float yval);
        Point(Point const &p);
        void operator=(Point const &f);
        ~Point();
        float getX(void) const;
        float getY(void) const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
#endif