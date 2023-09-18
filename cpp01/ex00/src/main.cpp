/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:46:17 by mjales            #+#    #+#             */
/*   Updated: 2023/09/18 19:50:18 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

int	main() {
	Zombie	*first_guy = newZombie("Young Zombie");
	randomChump("Random Zombie");
	first_guy->announce();
	delete first_guy;
	return 0;
}
