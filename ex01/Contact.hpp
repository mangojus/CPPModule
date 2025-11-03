/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 17:08:17 by rshin             #+#    #+#             */
/*   Updated: 2025/11/03 17:12:03 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>

class Contact
{
	public:
		Contact(std::string name, int age, int tel);
		~Contact();
	private:
		std::string	_name;
		int			_age;
		int			_tel;
};
