/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:32:23 by rshin             #+#    #+#             */
/*   Updated: 2025/11/05 11:48:36 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "[Zombie]Constructor Called" << std::endl;
	it = 0;
}

Zombie::~Zombie()
{
	std::cout << "[Zombie]Destructor Called" << std::endl;
}

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setZombieName(std::string zombieName)
{
	name = zombieName;
}

std::string	Zombie::getZombieName()
{
	return (name);
}
