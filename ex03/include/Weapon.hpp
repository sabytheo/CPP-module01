/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:18:42 by tsaby             #+#    #+#             */
/*   Updated: 2026/01/14 17:02:55 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
	private:
		std::string _type;

	public:
		Weapon();
		Weapon(const std::string& type);
		~Weapon(void);

	const std::string& getType();
	void setType(const std::string& type);

};


#endif
