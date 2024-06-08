/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 19:15:59 by hiono             #+#    #+#             */
/*   Updated: 2024/06/08 15:24:53 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_WEAPON_HPP
# define H_WEAPON_HPP

# include <string>

class	Weapon
{
public:
	Weapon(std::string type);
	Weapon(void);
	~Weapon(void);
	std::string	getType(void);
	void		setType(std::string type);

private:
	std::string	type;
};

#endif
