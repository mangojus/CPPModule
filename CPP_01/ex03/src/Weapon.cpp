/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:54:39 by rshin             #+#    #+#             */
/*   Updated: 2025/11/05 19:17:36 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	setType(type);
	std::cout << "[" << getType() << "]" << "Constructor called" << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "[" << getType() << "]" << "Destructor called" << std::endl;
}

void Weapon::setType(std::string type)
{
	_type = type;
}

std::string	Weapon::getType()
{
	return (_type);
}
