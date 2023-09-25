/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 00:14:38 by mjales            #+#    #+#             */
/*   Updated: 2023/09/25 13:55:54 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Weapon.hpp>

Weapon::Weapon(std::string type){
	this->_type = type;
}

Weapon::~Weapon(){}

void	Weapon::setType(std::string type) {
	this->_type = type;
}

std::string	Weapon::getType() const {
	return this->_type;
}
