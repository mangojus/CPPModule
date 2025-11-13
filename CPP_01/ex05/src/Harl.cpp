/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:40:13 by rshin             #+#    #+#             */
/*   Updated: 2025/11/13 17:27:58 by rshin            ###   ########lyon.fr   */
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

unsigned long Harl::hash(std::string str)
{
	unsigned long hash = 5381;

	for (size_t i = 0; i < str.size(); ++i)
		hash = ((hash << 5) + hash) + (int)str[i];
	return (hash);
}

Harl::complainFunc Harl::getComplainFunc(std::string level)
{
/*	std::string s1 = "DEBUG";
	std::string s2 = "INFO";
	std::string s3 = "WARNING";
	std::string s4 = "ERROR";
	std::cout << hash(s1) << std::endl;
	std::cout << hash(s2) << std::endl;
	std::cout << hash(s3) << std::endl;
	std::cout << hash(s4) << std::endl;*/
	switch (hash(level))
	{
		case DEBUG: return &Harl::debug;
		case INFO: return &Harl::info;
		case WARNING: return &Harl::warning;
		case ERROR: return &Harl::error;
		default: return NULL;
	}
}

void Harl::complain(std::string level)
{
	complainFunc f = getComplainFunc(level);
	if (f)
		(this->*f)();
}
