/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:30:08 by tsaby             #+#    #+#             */
/*   Updated: 2025/07/22 17:03:04 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *nZombie  = newZombie("Maxime");
	nZombie->announce();
	randomChump("Ramdom");
	delete nZombie;
	return(0);
}
