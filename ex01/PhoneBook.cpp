/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:55:37 by rshin             #+#    #+#             */
/*   Updated: 2025/11/04 16:37:32 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_it = 0;
	_count = 0;
	std::cout << "[Phonebook]Constructor called" << std::endl;
}

PhoneBook::~PhoneBook()
{
	std::cout << "[Phonebook]Destructor called" << std::endl;
}

void	printTrimmedField(const std::string &str)
{
	if (str.size() > 10)
		std::cout << str.substr(0, 9) << '.';
	else
		std::cout << std::setw(10) << str;
}

void	PhoneBook::printPhoneBook()
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string darkestSecret;
	std::string phoneNumber;

	for (int i = 0; i < 8 && i < _count; ++i)
	{
		firstName = _contacts[i].getFirstName();
		printTrimmedField(firstName);
		std::cout << '|';
		lastName = _contacts[i].getLastName();
		printTrimmedField(lastName);
		std::cout << '|';
		nickname = _contacts[i].getNickname();
		printTrimmedField(nickname);
		std::cout << '|';
		darkestSecret = _contacts[i].getDarkestSecret();
		printTrimmedField(darkestSecret);
		std::cout << '|';
		phoneNumber = _contacts[i].getPhoneNumber();
		printTrimmedField(phoneNumber);
		std::cout << std::endl;
	}
	std::cout << std::endl << std::endl;
}

void    PhoneBook::searchContact()
{
    char input;

	printPhoneBook();
    std::cin >> input;
    if (input >= '0' && input <= '8')
        _contacts[input - '0'].printContact();
}

void	PhoneBook::addContact()
{
	Contact contact;

	contact.setContact();
	if (_it == 8)
		_it = 0;
	_contacts[_it] = contact;
	++_it;
	++_count;
}
