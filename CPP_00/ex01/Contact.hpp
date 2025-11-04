/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:08:17 by rshin             #+#    #+#             */
/*   Updated: 2025/11/04 15:23:17 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Contact
{
	public:
		Contact();
		~Contact();
		void setContact();
		void searchContact();
		void printContact();
		void setFirstName();
		void setLastName();
		void setNickname();
		void setDarkestSecret();
		void setPhoneNumber();
		std::string getFirstName();
		std::string getLastName();
		std::string getNickname();
		std::string getDarkestSecret();
		std::string getPhoneNumber();

	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_darkestSecret;		
		std::string	_phoneNumber;
};
