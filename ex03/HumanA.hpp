/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:20:56 by hiono             #+#    #+#             */
/*   Updated: 2024/06/08 16:55:54 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_HUMANA_HPP
# define H_HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanA
{
public:
	HumanA(std::string name, Weapon &weapon);
	~HumanA(void);
	void	attack(void);

private:
	Weapon		*_weapon;
	std::string	_name;
};

#endif
