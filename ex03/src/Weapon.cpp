/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:23:39 by tsaby             #+#    #+#             */
/*   Updated: 2025/07/22 21:40:31 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	std::cout << "Constructor called Weapon " << std::endl;
}

Weapon::Weapon(const std::string& type): _type(type)
{
	std::cout << "Constructor called Weapon " << std::endl;
}

Weapon::~Weapon()
{
	std::cout << "Destructor called Weapon" << std::endl;
}

const std::string& Weapon::getType()
{
	return (this->_type);
}
void Weapon::setType(const std::string& type)
{
	this->_type = type;
}

