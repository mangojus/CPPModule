/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 16:47:54 by rshin             #+#    #+#             */
/*   Updated: 2025/11/05 19:18:23 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H

# define WEAPON_H

# include <string>
# include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon();
		void			 	setType(std::string type);
		const std::string&	getType();

	private:
		std::string	_type;
};

#endif
