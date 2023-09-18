/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 00:15:45 by mjales            #+#    #+#             */
/*   Updated: 2023/09/19 00:35:17 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <HumanA.hpp>

HumanA::HumanA(std::string name, Weapon &weapon){
	this->_name = name;
	this->_weapon = &weapon;
}

HumanA::~HumanA(){}

void HumanA::attack(){
	std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}
