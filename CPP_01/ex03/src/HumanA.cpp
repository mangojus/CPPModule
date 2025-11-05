/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:04:36 by rshin             #+#    #+#             */
/*   Updated: 2025/11/05 19:13:30 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon) : _name(name)
{
	std::cout << "[" << this->_name << "]" << "Constructor called" << std::endl;
	this->_weapon.setType(weapon.getType());
}

HumanA::~HumanA()
{
	std::cout << "[" << _name << "]" << "Destructor called" << std::endl;
}

void	HumanA::attack()
{
	std::cout << _name << "attacks with their" << _weapon.getType() << std::endl;
}
