/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:29:08 by hiono             #+#    #+#             */
/*   Updated: 2024/06/08 16:53:26 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_HUMANB_HPP
# define H_HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanB
{
public:
	HumanB(std::string name);
	~HumanB(void);
	void	attack(void);
	void	setWeapon(Weapon &weapon);

private:
	Weapon		*_weapon;
	std::string	_name;
};


#endif
