/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 14:54:16 by rshin             #+#    #+#             */
/*   Updated: 2025/11/03 16:36:16 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cctype>

int main(int argc, char **argv)
{
    for (int i = 1; i < argc; ++i)
    {
		std::string	str(argv[i]);
        for (size_t j = 0; j < str.size(); ++j)
            str[j] = std::toupper(str[j]);
        std::cout << str;
		if (i < argc - 1)
			std::cout << ' ' << std::flush;
    }
    std::cout << std::endl;
    return (0);
}
