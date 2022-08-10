/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 14:44:32 by smia              #+#    #+#             */
/*   Updated: 2022/08/10 20:46:02 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(), y()
{
}

Point::Point(const float xval, const float yval) : x(xval) , y(yval)
{
}

Point::Point(Point const  &p) : x(p.x) , y(p.y)
{
}

void Point::operator=(Point const &f)
{
    (void)f;
}

Point::~Point()
{
}

float Point::getX(void) const
{
    return (this->x.toFloat());
}

float Point::getY(void) const
{
    return (this->y.toFloat());
}
