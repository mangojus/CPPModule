/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 11:28:13 by rshin             #+#    #+#             */
/*   Updated: 2025/11/05 11:48:53 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Zombie
{
	public:
		Zombie();
		~Zombie();
		void announce();
		void setZombie();
		std::string getZombie();

	private:
		std::string	name;
}
