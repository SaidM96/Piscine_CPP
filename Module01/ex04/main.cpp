/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smia <smia@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/03 04:01:57 by smia              #+#    #+#             */
/*   Updated: 2022/08/04 21:26:02 by smia             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    std::string     line;
    std::ifstream   infile;
    int             index = 0;
    if (ac != 4)
    {
        std::cout << "wrong args!" << std::endl;
        return (1);
    }
    infile.open(av[1]);
	if (!infile)
    {
		std::cout << "file not found! " << std::endl;
		return (1);
	}
    if (!strcmp(av[1], "") || !strcmp(av[2], ""))
    {
		std::cout << "empty strings" << std::endl;
		return (1);
	}
    std::string filename(std::string(av[1]) + ".replace");
    std::ofstream outfile(filename);
    int len1 = strlen(av[2]);
    int len2 = strlen(av[3]);
    while(getline(infile, line))
    {
        index = line.find(av[2]);
       
        while (index >= 0)
        {
            line.erase(index, len1);
            line.insert(index, av[3]);
            index = line.find(av[2], index + len2);
        }
        outfile << line;
        outfile << std::endl;
    }
    outfile << std::endl;
    outfile.close();
    infile.close();
    return 0;
}

