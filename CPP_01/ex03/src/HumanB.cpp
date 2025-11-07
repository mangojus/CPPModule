/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:14:04 by rshin             #+#    #+#             */
/*   Updated: 2025/11/07 12:42:55 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	_weapon = NULL;
	std::cout << "[" << this->_name << ']' << "Constructor called" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "[" << _name << "]" << "Destructor called" << std::endl;
}

void	HumanB::attack()
{
	if (!_weapon)
		std::cout << "fist" << std::endl;
	std::cout << _name << "attacks with their" << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void	HumanB::setName(std::string name)
{
	this->_name = name;
}
