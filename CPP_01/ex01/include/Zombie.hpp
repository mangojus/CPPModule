/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 13:37:04 by rshin             #+#    #+#             */
/*   Updated: 2025/11/05 14:26:22 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

# define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie
{
	public:
		Zombie();
		~Zombie();
		void setZombieName(std::string name);
		void announce();

	private:
		std::string	name;
};

Zombie* zombieHorde(int N, std::string name);

#endif
