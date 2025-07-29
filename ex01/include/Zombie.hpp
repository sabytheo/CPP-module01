/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:18:42 by tsaby             #+#    #+#             */
/*   Updated: 2025/07/22 18:16:00 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	private:
		std::string _name;

	public:
			Zombie(void);
			Zombie(const std::string& name);
			~Zombie(void);

			void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif
