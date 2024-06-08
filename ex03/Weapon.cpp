/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:18:02 by hiono             #+#    #+#             */
/*   Updated: 2024/06/08 15:24:56 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

Weapon::Weapon(void)
{
}

Weapon::~Weapon(void)
{
}

std::string	Weapon::getType(void)
{
	return type;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
