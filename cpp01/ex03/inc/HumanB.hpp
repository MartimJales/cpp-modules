/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 00:13:12 by mjales            #+#    #+#             */
/*   Updated: 2023/09/25 13:57:16 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <Weapon.hpp>
#include <iostream>

class HumanB
{
	private:
		std::string	_name;
		Weapon*		_weapon;
	public:
		HumanB(std::string name);
		~HumanB();
		void	attack();
		void	setWeapon(Weapon &weapon);
};

#endif
