/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshin <rshin@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 18:16:43 by rshin             #+#    #+#             */
/*   Updated: 2025/11/05 14:26:12 by rshin            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int main()
{
	Zombie* horde;

	int n = 5;
	horde = zombieHorde(n, "Fungi");
	for (int i = 0; i < n; ++i)
		horde[i].announce();
	delete[] horde;
	return (0);
}
