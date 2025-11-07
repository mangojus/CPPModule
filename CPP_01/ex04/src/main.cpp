/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:16:43 by rshin             #+#    #+#             */
/*   Updated: 2025/11/07 19:27:39 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

bool	replace_dup_file(const char *filename, const char *s1, const char *s2)
{
	std::string _s1 = s1;
	std::string _s2 = s2;
	
	std::ifstream infile(filename);
	if (!infile)
	{
		std::cerr << "Cannot open infile" << std::endl;
		return (1);
	}
	std::string newfilename = std::string(filename) + ".replace";
	std::ofstream outfile(newfilename.c_str());
	if (!outfile)
	{
		std::cerr << "Cannot create outfile" << std::endl;
		return (1);
	}
	std::string line;
	while (std::getline(infile, line))
	{
		size_t	pos = 0;
		while ((pos = line.find(_s1, pos)) != std::string::npos)
		{
			line.erase(pos, _s1.length());
			line.insert(pos, _s2);
			pos += _s2.length();
		}
		outfile << line << std::endl;
		std::cout << line << std::endl;
	}
	return (0);
}

int main(int argc, char **argv)
{
	(void)argv;
	if (argc != 4)
		return (1);
	if (!replace_dup_file(argv[1], argv[2], argv[3]))
		return (1);
	return (0);
}
