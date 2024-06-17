/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 11:06:33 by hiono             #+#    #+#             */
/*   Updated: 2024/06/17 16:28:47 by hiono            ###   ########.fr       */
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
	void	setName(std::string name);
	Zombie(void);

private:
	std::string	_name;
};

Zombie	*zombieHorde(int N, std::string name);

#endif
