/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 17:04:15 by rshin             #+#    #+#             */
/*   Updated: 2025/11/07 12:32:20 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP

# define HUMANB_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon& weapon);
		void setName(std::string name);

	private:
		std::string	_name;
		Weapon*		_weapon;
};

#endif
