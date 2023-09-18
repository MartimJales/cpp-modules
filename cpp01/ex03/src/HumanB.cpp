/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 00:17:16 by mjales            #+#    #+#             */
/*   Updated: 2023/09/19 00:35:29 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanB.hpp>

HumanB::HumanB(std::string name){
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::~HumanB(){}

void HumanB::setWeapon(Weapon &weapon){
	this->_weapon = &weapon;
}

void HumanB::attack(){
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
