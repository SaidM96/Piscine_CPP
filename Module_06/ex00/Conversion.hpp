/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 01:23:04 by smia              #+#    #+#             */
/*   Updated: 2022/08/24 12:01:31 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#define ch 10
#define integer 11
#define fl 12
#define db 13

#include <iostream>

// tools
bool infDouble(char *str);
bool infFloat(char *str);

// check Types
bool isChar(char *c);
bool isDouble(char *str);
bool isFloat(char *str);
bool isInt(char *str);

// Print Conversion types
void CharPrint(char *c);
void IntPrint(double c);
void FloatPrint(char *str);
void DoublePrint(char *str);
void infFloatPrint(char *str);
void infDoublePrint(char *str);

#endif