/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 17:10:42 by tsaby             #+#    #+#             */
/*   Updated: 2026/01/12 19:29:56 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon): _name(name),_weapon(weapon)
{
	std::cout << "Constructor called HumanA " << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Destructor called HumanA " << std::endl;
}
void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}
