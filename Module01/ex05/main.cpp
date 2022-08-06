/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 05:27:37 by smia              #+#    #+#             */
/*   Updated: 2022/08/06 04:24:29 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl func;

	func.complain("DEBUG");
	func.complain("INFO");
	func.complain("WARNING");
	func.complain("ERROR");
}