/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:10:42 by tsaby             #+#    #+#             */
/*   Updated: 2026/01/09 14:21:41 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string& name): _name(name)
{
	std::cout << "Constructor called HumanB " << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Destructor called HumanB " << std::endl;
}
void HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}
