/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:23:39 by tsaby             #+#    #+#             */
/*   Updated: 2025/07/22 16:42:51 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void): _name("default")
{
	std::cout << "Constructor called " << _name << std::endl;
}

Zombie::Zombie(const std::string& name)
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

