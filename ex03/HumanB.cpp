/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:33:05 by hiono             #+#    #+#             */
/*   Updated: 2024/06/08 16:55:15 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	_weapon = NULL;
	_name = name;
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << "\n";
	else
		std::cout << _name << " doesn't have a weapon" << "\n";
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}
