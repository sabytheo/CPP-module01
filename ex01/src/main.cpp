/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:30:08 by tsaby             #+#    #+#             */
/*   Updated: 2026/01/14 14:05:58 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{

	int N = 4;
	Zombie *hordeZombie = zombieHorde(N, "Maxime");
	if (!hordeZombie)
	{
		std::cout << "N must be positive" << std::endl;
		return (1);
	}
	for (int i = 0; i < N; i++)
	{
		std::cout << "Index" << i << ": ";
		hordeZombie[i].announce();
	}
	delete[] hordeZombie;
	return (0);
}
