/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 11:19:13 by hiono             #+#    #+#             */
/*   Updated: 2024/06/17 16:33:08 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void)
{
	std::cout << "--- before newZombie ---" << "\n";
	Zombie *zombie = newZombie("zombie1");
	if (!zombie)
		return 1;
	std::cout << "--- after newZombie ---" << "\n";
	zombie->announce();
	delete zombie;

	std::cout << "\n";
	std::cout << "--- before randomChump ---" << "\n";
	randomChump("zombie2");
	std::cout << "--- after randomChump ---" << "\n";

	return 0;
}
