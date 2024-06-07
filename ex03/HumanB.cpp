/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:33:05 by hiono             #+#    #+#             */
/*   Updated: 2024/06/07 19:34:26 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name, Weapon weapon)
{
	_weapon = weapon;
	_name = name;
}

HumanB::HumanB(std::string name)
{
	_name = name;
}

HumanB::~HumanB(void)
{
}

void	HumanB::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon.getType() << "\n";
}

void	HumanB::setWeapon(Weapon weapon)
{
	_weapon = weapon;
}
