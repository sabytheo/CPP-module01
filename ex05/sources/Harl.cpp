/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tsaby <tsaby@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 14:23:39 by tsaby             #+#    #+#             */
/*   Updated: 2025/07/29 13:33:10 by tsaby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
	std::cout << "Constructor called Harl " << std::endl;
}

Harl::~Harl()
{
	std::cout << "Destructor called Harl" << std::endl;
}
void (Harl::_debug)()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void (Harl::_info)()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void (Harl::_warning)()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void (Harl::_error)()
{
	std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string strlevel[4] = {"DEBUG","INFO","WARNING","ERROR"};
	void (Harl::*function[4])() = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	for (int i = 0 ; i < 4; i++)
	{
		if (strlevel[i] == level)
		{
			(this->*function[i])();
			return ;
		}
	}
	std::cout << "Error" << std::endl;

}


