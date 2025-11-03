/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:12:10 by rshin             #+#    #+#             */
/*   Updated: 2025/11/03 17:20:56 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class PhoneBook
{
	public:
		PhoneBook();
		~PhoneBook();
		addContact();
		searchContact();

	private:
		Contact[8] Contact;
}
