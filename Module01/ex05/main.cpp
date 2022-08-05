/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 05:27:37 by smia              #+#    #+#             */
/*   Updated: 2022/08/05 05:55:59 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl func;

	func.complain("DEBUG");
	func.complain("INFO");
	func.complain("ERROR");
	func.complain("WARNING");
	func.complain("RANDOM TEXT");
}