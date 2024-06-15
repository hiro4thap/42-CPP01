/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 15:05:14 by hiono             #+#    #+#             */
/*   Updated: 2024/06/15 18:19:24 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	_func_map["DEBUG"] = &Harl::debug;
	_func_map["INFO"] = &Harl::info;
	_func_map["WARNING"] = &Harl::warning;
	_func_map["ERROR"] = &Harl::error;
}

Harl::~Harl(void)
{}

void	Harl::complain(std::string level)
{
	if (_func_map.find(level) != _func_map.end())
		(this->*_func_map[level])();
	else
		std::cout << "Invalid level name" << '\n';
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
