/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hiono <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/15 17:26:26 by hiono             #+#    #+#             */
/*   Updated: 2024/06/15 20:05:10 by hiono            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Invalid argument" << '\n';
		std::cout << "Harl level should be one of DEBUG/INFO/WARNING/ERROR" << '\n';
		return 1;
	}
	Harl harl = Harl();
	harl.complain((std::string) argv[1]);
}
