/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:23:39 by tsaby             #+#    #+#             */
/*   Updated: 2026/01/14 13:14:41 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void): _name("default")
{
	std::cout << "Constructor called " << _name << std::endl;
}

void Zombie::setName(std::string name)
{
  this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << "Destructor called " << _name << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

