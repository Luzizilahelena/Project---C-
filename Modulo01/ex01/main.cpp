/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnzila <lnzila@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 09:24:31 by lnzila            #+#    #+#             */
/*   Updated: 2025/04/21 08:37:19 by lnzila           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av)
{
	int	i;

	if (ac != 2)
	{
		std::cerr << "Error! Use: <./brainz\\!> <name>" << std::endl;
		return (1);
	}
	i = -1;
	Zombie	*horde = zombieHorde(10, *(av + 1));

	while (++i < 10)
		horde[i].announce();
	delete[] horde;
	return (0);
}
