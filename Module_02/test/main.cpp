/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/06 18:43:06 by smia              #+#    #+#             */
/*   Updated: 2022/08/11 14:14:47 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <cmath>

int main ()
{
    float a = 12.3652;
    float b = 17.3265;

    int Fixeda =(int) a * (1 << 8) ;
    int Fixedb = b * (1 << 8) ;
    int ires = Fixeda + Fixedb; 
    float add = (float)(ires);
    add = add / (1 << 8);
    std:: cout << a + b << std::endl;
    std:: cout << add << std::endl;
}