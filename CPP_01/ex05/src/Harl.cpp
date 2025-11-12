/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:40:13 by rshin             #+#    #+#             */
/*   Updated: 2025/11/12 17:17:41 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "[Harl]Constructor Created" << std::endl;
}

Harl::~Harl()
{
	std::cout << "[Harl]Destructor Created" << std::endl;
}

void Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	switch (level)
	{
		case (level == "DEBUG")
		{
			debug();
			break;
		}
		case (level == "INFO")
		{
			info();
			break;
		}
		case (level == "WARNING")
		{
			warning();
			break;
		}
		case (level == "ERROR")
		{
			error();
			break;
		}
	}
	return;
}
