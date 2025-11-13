/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:40:37 by rshin             #+#    #+#             */
/*   Updated: 2025/11/13 17:27:18 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP

# define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
	public:
		Harl();
		~Harl();
		void complain(std::string level);

	private:
		void debug();
		void info();
		void warning();
		void error();
		enum hashLevel
		{
			DEBUG = 210670746764,
			INFO = 6384151633,
			WARNING = 229444843303835,
			ERROR = 210672417103
		};
		typedef void (Harl::*complainFunc)();
		complainFunc getComplainFunc(std::string level);
		unsigned long hash(const std::string str);
};

#endif
