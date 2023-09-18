/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:46:17 by mjales            #+#    #+#             */
/*   Updated: 2023/09/18 20:10:40 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int	main() {
	int		horde_size;
	Zombie	*horde;

	// Allocates memory for 10 Zombie instances
	horde_size = 10;
	horde = zombieHorde(horde_size, "Crazy Zombie");
	if (horde == NULL)
		return 1;

	// Free the memory allocated for the horde
	delete[] horde;

	return 0;
}
