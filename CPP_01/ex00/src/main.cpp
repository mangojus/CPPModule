/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:16:43 by rshin             #+#    #+#             */
/*   Updated: 2025/11/05 13:35:21 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie* walker;	

	walker = newZombie("Scrawny");
	randomChump("Fungi");
	walker->announce();
	delete (walker);
	return (0);
}
