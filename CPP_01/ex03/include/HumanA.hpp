/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:58:14 by rshin             #+#    #+#             */
/*   Updated: 2025/11/05 19:17:50 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP

# define HUMANA_HPP

# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void attack();

	private:
		std::string	_name;
		Weapon&		_weapon;
};

#endif
