/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:24:17 by hiono             #+#    #+#             */
/*   Updated: 2024/06/08 18:35:38 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
	: _weapon(weapon)
{
	_name = name;
}

HumanA::~HumanA(void)
{
}

void	HumanA::attack(void)
{
	std::cout << _name << " attacks with their " << _weapon.getType() << "\n";
}
