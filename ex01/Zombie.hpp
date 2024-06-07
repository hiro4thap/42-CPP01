/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 11:06:33 by hiono             #+#    #+#             */
/*   Updated: 2024/06/07 18:46:28 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef H_ZOMBIE_HPP
# define H_ZOMBIE_HPP

# include <iostream>

class	Zombie
{
public:
	Zombie(std::string name);
	~Zombie(void);
	void 	announce(void);
	Zombie(void);

private:
	std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
