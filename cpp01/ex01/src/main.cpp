/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:46:17 by mjales            #+#    #+#             */
/*   Updated: 2023/09/25 13:52:22 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int	main() {
	int		horde_size;
	Zombie	*horde;

	horde_size = 10;
	horde = zombieHorde(horde_size, "Crazy Zombie");
	if (horde == NULL)
		return 1;

	delete[] horde;

	return 0;
}
