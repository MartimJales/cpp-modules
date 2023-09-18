/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:54:27 by mjales            #+#    #+#             */
/*   Updated: 2023/09/18 20:07:52 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Zombie.hpp>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *arr;

	arr = new Zombie[N];

	for (int i = 0; i < N; i++){
		arr[i].setName(name);
		arr[i].announce();
	}
	return arr;
}
