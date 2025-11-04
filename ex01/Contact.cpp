/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:34:50 by rshin             #+#    #+#             */
/*   Updated: 2025/11/04 16:36:58 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "[Contact]Constructor Called" << std::endl;
}

Contact::~Contact()
{
	std::cout << "[Contact]Destructor Called" << std::endl;
}

void	Contact::setContact()
{
	setFirstName();
	setLastName();
	setNickname();
	setDarkestSecret();
	setPhoneNumber();
}

void	Contact::printContact()
{
	std::cout << "First name : " << getFirstName() << std::endl;
	std::cout << "Last name : " << getLastName() << std::endl;
	std::cout << "Nickname : " << getNickname() << std::endl;
	std::cout << "Darkest secret : " << getDarkestSecret() << std::endl;
	std::cout << "Phone number : " << getPhoneNumber() << std::endl;
	std::cout << std::endl;
}

void	Contact::setFirstName()
{
	std::cout << "First Name : ";
	std::cin >> _firstName;
}

void	Contact::setLastName()
{
	std::cout << "Last Name : ";
	std::cin >> _lastName;
}

void	Contact::setNickname()
{
	std::cout << "Nickname : ";
	std::cin >> _nickname;
}

void	Contact::setDarkestSecret()
{
	std::cout << "Darkest Secret : ";
	std::cin >> _darkestSecret;
}

void	Contact::setPhoneNumber()
{
	std::cout << "Phone Number : ";
	std::cin >> _phoneNumber;
}

std::string	Contact::getFirstName()
{
	return (_firstName);
}

std::string	Contact::getLastName()
{
	return (_lastName);
}

std::string	Contact::getNickname()
{
	return (_nickname);
}

std::string	Contact::getDarkestSecret()
{
	return (_darkestSecret);
}

std::string	Contact::getPhoneNumber()
{
	return (_phoneNumber);
}
