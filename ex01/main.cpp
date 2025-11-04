/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:55:49 by rshin             #+#    #+#             */
/*   Updated: 2025/11/04 16:39:54 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	std::string	input;
	PhoneBook phoneBook;

	while (true)
	{
		std::cout << "What would you like to do ?" << std::endl;
		std::cin >> input;
		if (input == "ADD")
		{
			std::cout << "Adding a new contact..." << std::endl;
			phoneBook.addContact();
			std::cout << "Contact Added" << std::endl;
		}
		else if (input == "SEARCH")
		{
			std::cout << "Searching contact..." << std::endl;
			phoneBook.searchContact();
			std::cout << "End of Search" << std::endl;
		}
		else if (input == "EXIT")
		{	
			std::cout << "Exited" << std::endl;
			return (1);
		}
		else
			continue;
	}
	return (0);
}
