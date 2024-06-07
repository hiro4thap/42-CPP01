/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 12:12:57 by hiono             #+#    #+#             */
/*   Updated: 2024/06/07 19:08:43 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	int			number = 4;
	std::string name = "zomb";

	Zombie	*zombies = zombieHorde(number, name);
	for (int i = 0; i < number; i++)
	{
		zombies[i] = Zombie(name);
		zombies[i].announce();
	}

	std::cout << "\n";
	std::cout << "--- delete all zombies ---" << "\n";
	delete[] zombies;

	return 0;
}
