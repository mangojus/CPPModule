/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:12:10 by rshin             #+#    #+#             */
/*   Updated: 2025/11/04 16:29:21 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include <iomanip>

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		void addContact();
		void searchContact();
		void printPhoneBook();

	private:
		Contact	_contacts[8];
		int		_it;
		int		_count;
};
