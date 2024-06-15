/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:05:14 by hiono             #+#    #+#             */
/*   Updated: 2024/06/15 19:52:08 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

void	Harl::complain(std::string level)
{
	void	(Harl::*fct[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	harl_levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int		level_int = -1;

	for (int i = 0; i < 4; i++)
	{
		if (level == harl_levels[i])
			level_int = i;
	}
	switch(level_int)
	{
		case 0:
			for (int i = level_int; i < 4; i++)
				(this->*(fct[i]))();
			break;
		case 1:
			for (int i = level_int; i < 4; i++)
				(this->*(fct[i]))();
			break;
		case 2:
			for (int i = level_int; i < 4; i++)
				(this->*(fct[i]))();
			break;
		case 3:
			for (int i = level_int; i < 4; i++)
				(this->*(fct[i]))();
			break;
		default:
			std::cout << "Invalid harl level" << '\n';
	}
}

void	Harl::debug(void)
{
	std::cout << "Message for debug" << '\n';
}

void	Harl::info(void)
{
	std::cout << "Message for info" << '\n';
}

void	Harl::warning(void)
{
	std::cout << "Message for warning" << '\n';
}

void	Harl::error(void)
{
	std::cout << "Message for error" << '\n';
}
