/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:28:13 by rshin             #+#    #+#             */
/*   Updated: 2025/11/05 12:21:58 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void announce();
		void setZombieName(std::string name);

	private:
		std::string	name;
};

void	randomChump(std::string name);
Zombie*	newZombie(std::string name);

#endif
