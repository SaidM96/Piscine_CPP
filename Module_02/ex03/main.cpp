/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:02:30 by smia              #+#    #+#             */
/*   Updated: 2022/08/10 20:52:56 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
// A =  (1/2) [x1 (y2 – y3 ) + x2 (y3 – y1 ) + x3(y1 – y2)]
float calcul_area(Point const a, Point const b, Point const c)
{
    float result = 0.5 * ((a.getX() * (b.getY() - c.getY())) + (b.getX() * (c.getY() - a.getY())) + (c.getX() * (a.getY() - b.getY())));
    if (result < 0)
        result *= -1;
    return result;
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float A = calcul_area(a,b,c);
    float a1 = calcul_area(a,b,point);
    float a2 = calcul_area(a,c,point);
    float a3 = calcul_area(b,c,point);

    std:: cout << A << std::endl;
    std:: cout << a1 << std::endl;
    std:: cout << a2<< std::endl;
    std:: cout << a3 << std::endl;

    if (!a1 || !a2 || !a3 || !A)
        return (0);
    if (A == a1 + a2 + a3)
        return (1);
    return (0);        
}

int main( void )
{
    Point a(10,30);
    Point b(0,0);
    Point c(20,0);

    Point x(10, 15);

    if (bsp(a,b,c,x))
        std::cout << "the point x  is inside the triangle ABC" << std::endl;
    else
        std::cout << "the point x  is not inside the triangle ABC" << std::endl;
}